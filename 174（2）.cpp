using namespace std;
#include <iostream>
#include <math.h>
struct Point//ƽ���ϵĵ� 
{
	int x;
	int y;
};
double d(int a,int b,int c,int d)//�������� 
{
	double n;
	n=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return n;
}
struct l//���߳� 
{
	double h;
	double f;
	double g;
};
bool sanjiao(double e,double f,double g)//�ж��Ƿ��������� 
{
	if((e+f)>g&&(e+g)>f&&(f+g)>e)
	  return true;
	else
	  return false;
}
double C(double e,double f,double g)//�������ܳ� 
{
	double c;
	c=e+f+g;
	return c; 
}
double area(double e,double f,double g)//��������� 
{
	double k,s;
	k=(e+f+g)/2;
	s=sqrt(k*(k-e)*(k-f)*(k-g));
	return s;
}
int main()
{
	Point a;
	Point b;
	Point c;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	cin>>c.x>>c.y;
	cout<<d(a.x,a.y,b.x,b.y)<<endl;
	cout<<d(a.x,a.y,c.x,c.y)<<endl;
	cout<<d(b.x,b.y,c.x,c.y)<<endl;
	l e={d(a.x,a.y,b.x,b.y),d(a.x,a.y,c.x,c.y),d(b.x,b.y,c.x,c.y)};
	if(sanjiao(e.f,e.g,e.h))
	{
	  cout<<C(e.g,e.h,e.f)<<endl;
 	  cout<<area(e.g,e.h,e.f)<<endl;
    }
 	else
 	  cout<<"������������"<<endl; 
	return 0;
}
