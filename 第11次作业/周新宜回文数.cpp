using namespace std;
#include<iostream>
int main()
{
	int n;
	int a=0,m;
	cin>>n;
	m=n;
	while(m>0)
	{
		a=a*10+m%10;
		m=m/10;
	}
	if(a==n)
	  cout<<"����һ��������";
	else
	  cout<<"�ⲻ��һ��������";
	return 0; 
}
