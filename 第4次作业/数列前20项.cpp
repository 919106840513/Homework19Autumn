using namespace std;
#include <iostream>
#include <iomanip>
int main()
{
	int a,b,i,c;
	a=1;
	b=2;
	cout<<a<<"/"<<b<<" ����:"<<a<<" ��ĸ:"<<b<<endl;
	a=a+b;
	cout<<a<<"/"<<b<<" ����:"<<a<<" ��ĸ:"<<b<<endl;//a=3,b=2
	for(i=1;i<=17;i++)
	{
		c=a+b;
		b=a;
		a=c;
		cout<<a<<"/"<<b<<" ����:"<<a<<" ��ĸ:"<<b<<endl;
	}
	return 0;
}
