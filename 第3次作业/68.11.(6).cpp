using namespace std;
#include <iostream>
int main(void)
{
	cout<<"a*x*x+b*x+c=0"<<endl;
	long double a=0,b=0,c=0,d=0;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"c=";cin>>c;
	d=b*b-4*a*c;
	if(d<0)
		cout<<"�޽�";
	else if(d==0) 
			cout<<"��һ��"; 
		 else
			cout<<"������";
	return 0;
}
