#include<iostream.h>
void main()
{    int a=2,b=3,i,t,n;
     cout<<"��1��: 1/2"<<'\n';
     for(i=0;i<19;i++)
	 {   cout<<"��"<<i+2<<"��: "<<b<<"/"<<a<<'\n';
	     t=a+b;
		 a=b;
		 b=t;
	 }    
}