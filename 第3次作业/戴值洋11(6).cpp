#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	cout<<"������a b c:";
	double a,b,c;
	cin>>a>>b>>c;
	if(b*b-4*a*c<0)
	{
		cout<<"������ʵ����"<<endl; 
	}
	else if(b*b-4*a*c==0)
	{
		cout<<"������������ȵ�ʵ������"<<-b/(2*a)<<endl; 
	}
	else
	{
		cout<<"��������������ȵ�ʵ������"<<(-b+sqrt(b*b-4*a*c))/(2*a)<<" "<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
	}
	return 0;
}
