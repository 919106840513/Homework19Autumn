using namespace std;
#include <iostream>
#include <math.h>
struct ratio{
	double d;
	double e;
	double f;
};
ratio f(int a,int b,int c)
{
	ratio data;
	data.d=b*b-4*a*c;
	data.e=2*a;
	data.f=-b;
	return data; 	
}
int main()
{
	cout<<"����a,b,c��ֵ"<<endl;
	double a,b,c;
	double x,y;
	cin>>a>>b>>c; 
	ratio data;
	data=f(a,b,c);
	if(data.d<0) cout<<"��һԪ���η�����ʵ��"<<endl;
	if(data.d==0)
	{
		x=data.f/data.e;
		cout<<"�÷�����������ȵ�ʵ����"<<x<<endl; 
	}
	if(data.d>0)
	{
		x=(data.f+sqrt(data.d))/data.e;
		y=(data.f-sqrt(data.d))/data.e;
		cout<<"�÷������������ȵ�ʵ����"<<x<<" "<<y<<endl; 
	 } 
	 return 0;
 } 
