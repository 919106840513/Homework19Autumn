#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,d,s1,s2;
	cout<<"����һԪ���η��̵�ϵ��a b c:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
		cout<<"�����޸�"<<endl;
	else if(d==0)
	{
		s1=-b/(2*a);
		cout<<"������һ������"<<s1<<endl;
	 } 
	else
	{
		s1=(-b-sqrt(d))/(2*a);
		s2=(-b+sqrt(d))/(2*a);
		cout<<"��������������"<<s1<<' '<<s2<<endl; 
	}
	return 0;
}
