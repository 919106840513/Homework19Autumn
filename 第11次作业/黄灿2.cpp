#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"����������һ��������"; 
	cin>>x;
	int m=x,s=0;
	while(m!=0)
	{
		s=s*10+(m%10);
		m=m/10;
	}
	if(s==x)
	cout<<x<<"�ǻ�����"<<endl;
}
