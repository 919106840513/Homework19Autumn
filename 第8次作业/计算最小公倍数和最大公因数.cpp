#include<iostream>
using namespace std;
int gcd(int a,int b)
{
     int r=0;
     	r=a%b;
	while(r!=0){
		a=b,b=r;
		r=a%b;
	}
	cout<<"���Լ��:"<<b<<endl;
}
int lcm(int a,int b)
{
	if(a>b&&a%b==0)
	   cout<<a<<endl;
	   else {
	   if(b>a&&b%a==0)
	     cout<<"��С��������"<<b<<endl;
	     else
	     cout<<"��С��������"<<a*b<<endl;
	 }
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		lcm(a,b);
	    gcd(a,b );	
	}
	return 0;
}
