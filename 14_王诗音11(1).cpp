#include<iostream>
using namespace std;
int main()
{
	int n,s=0,i=1;
	cout<<"����һ��������";
	cin>>n;
	while(n)
	{
		s+=(n%2)*i;
		i*=10;
		n/=2;
	}
	cout<<"���������ʽ��"<<s<<endl;
	return 0; 
}
