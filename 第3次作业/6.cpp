#include<iostream>
#include<math.h>
using namespace std;
int main()
{   double a,b,c,h,x1,x2;
    cin>>a>>b>>c;
    h=b*b-4*a*c;
    if(h<0)
		cout<<"������ʵ��"<<endl;
	else
	{   x1=(-b+sqrt(h))/2/a;
	    x2=(-b-sqrt(h))/2/a;
	    if(x1==x2)
			cout<<"������һ��ʵ��"<<"x="<<x1<<endl;
	    else
		    cout<<"����������ʵ��x1="<<x1<<" x2="<<x2<<endl;
	}
    return 0;
}
