#include <iostream>
#include <math.h>
using namespace std;
double s(double a,double b,double c)
{
	return (a+b+c)/2.0; 
}
double area(double a,double b,double c)
{
	return sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c));
}
int main()
{
	double a,b,c;
	cout<<"�����������������߳���";
	cin>>a>>b>>c;
	cout<<"���Ϊ��"<<area(a,b,c);
	return 0;
}
