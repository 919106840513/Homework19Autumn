#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a,b,c,d,x1,x2;
	cout<<"a="<<endl;
	cin>>a;
	cout<<"b="<<endl;
	cin>>b;
	cout<<"c="<<endl;
	cin>>c;
	d=b*b-4*a*c;
    if(d==0)
	{
	x1=x2=-b/(2*a); 
	cout<<"�������������ʵ����"<<x1<<endl;}
    else if(d<0)
         cout<<"�����޸�"<<endl;	
	    else
	    {
	    x1=(-b+sqrt(d))/(2*a);
	    x2=(-b-sqrt(d))/(2*a);
	    cout<<"���������������ʵ����"<<x1<<x2<<endl;}
	} 
