using namespace std;
#include <iostream>
int main ()
{
	int a=3,b=2,c;
	cout<<"����ǰ20��Ϊ��"<<endl; 
	cout<<1<<"/"<<2<<endl;
	for(int i=0;i<19;i++)
	{	
		cout<<a<<"/"<<b<<endl;
		c=a;
		a=c+b;
		b=c;

	}
	return 0;
}
