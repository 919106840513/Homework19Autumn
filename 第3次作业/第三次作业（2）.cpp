//����С�� 
using namespace std; 
#include <iostream>
#include <math.h>
int main (void)

{
	float a,b,c,n,x1,x2,x;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	n=b*b-4*a*c;
	if (n<0)
	  cout<<"�����޸�"<<endl;
	else if (n==0)
	  {
	   cout<<"������һ����"<<endl; 
	   cout<<"x="<<-b/2*a<<endl; 
	   } 
	else
	  {
	  	cout<<"������������"<<endl;
		cout<<"x1="<<(-b+sqrt(n))/2*a<<endl;
		cout<<"x2="<<(-b-sqrt(n))/2*a<<endl;
       }
    return 0;
}
