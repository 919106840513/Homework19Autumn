#include<iostream>
using namespace std;
int gys(int x,int y)
{
	int a,t;
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	while(y!=0)
	{
		a=x%y;
		x=y;
		y=a;
	}
	return x;
}
int gbs(int x,int y)
{
	int b,s;
	b=gys(x,y);
	s=x*y/b;
	return s;
}
int main()
{
	int x,y,m,n;	
	cout<<"��������������"<<endl;	
	cin>>x>>y;
	m=gys(x,y);
	cout<<"���Լ����"<<m<<endl;
	n=gbs(x,y);
	cout<<"��С��������"<<n<<endl;
	return 0;
	
}
