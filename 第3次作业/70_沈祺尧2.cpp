//11.1 
using namespace std;
#include <iostream>
int main(void)
{int x,y,a[32];
   cout<<"������һ������";
   cin>>x; 
if(x>=0)
   {for(int i=0;i<32;i++)
       {a[i]=x%2;
       x=x/2;
       }
    cout<<"���������Ϊ";
    for(int i=31;i>=0;i--)
    cout<<a[i];
   }
else y=-x-1;
    {for(int i=0;i<32;i++)
       {a[i]=y%2;
       y=y/2;
       }
    cout<<"���������Ϊ";
    for(int i=31;i>=0;i--)
    cout<<!a[i];
    }
    return 0;
}




//11.6
using namespace std;
#include <iostream>
#include <math.h>
int main(void)
{double a,b,c,delta;
   cout<<"������ϵ��a=";
   cin>>a;
   cout<<"һ����ϵ��b=";
   cin>>b;
   cout<<"������c=";
   cin>>c;
   delta=b*b-4*a*c;   
if(delta<0)
   	cout<<"�޸�";
else if(delta==0)
       {double x=(-b)/(2*a);
	   cout<<"���ҽ���һ����x="<<x;
       } 
     else
       {double x1=(-b+sqrt(delta))/(2*a);
	    double x2=(-b-sqrt(delta))/(2*a);
	    cout<<"��һԪ���η��̵�������ֱ�Ϊ��"<<x1<<' ' <<x2;
	   }
	return 0;
}
