using namespace std;
#include <iostream>
int main (void)
{
	int x,a,sum=0;
	cin>>x;
	for(a=1;a<=x;a++)
	   if(x%a==0)
	   {
	    cout<<a<<' ';
	   	sum=sum+a;
	   }
	   	if(2*x==sum&&x>=1&&x<=100)
	    cout<<endl<<"����Ϊ��ȫ��";
	   
	return 0;
}
