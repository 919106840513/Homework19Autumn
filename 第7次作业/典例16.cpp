#include<iostream>
using namespace std; 
int main()
{
	int m,n,x,y,a,b;
	cin>>m>>n;
	x=m;y=n;
	if(x<y)
	{
		a=x;
		x=y;
		y=a;
	}
	while(y!=0)
	{
		b=x%y;
		x=y;
		y=b;
	}
	cout<<"���Լ����"<<x<<'\t';
	cout<<"��С��������"<<m*n/x<<endl;
}
