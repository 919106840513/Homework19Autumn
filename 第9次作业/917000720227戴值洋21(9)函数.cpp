#include <iostream>
using namespace std;
#include <math.h>
double Area(double a,double b,double c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		double area,s;
		s=(a+b+c)/2;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		return area;
	} 
	else
	{
		cout<<"�޷����������Σ�";
		return 0;
	}
}
int main()
{
	double a,b,c;
	cout<<"�����������������߳���";
	cin>>a>>b>>c; 
	cout<<Area(a,b,c);
	return 0;
} 
