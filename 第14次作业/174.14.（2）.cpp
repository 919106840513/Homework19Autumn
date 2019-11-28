#include <iostream>
using namespace std;
#include <math.h>

struct Point{
	int x,y;
};

double len(Point point1,Point point2)
{
	double length;
	length=sqrt(pow((point1.x-point2.x),2)+pow((point1.y-point2.y),2));
	return length;
}


bool isTri(double a,double b,double c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		return 1;
	}
	else
	return 0;
}


struct tri{
	Point point1,point2,point3;
};

double C(double a,double b,double c)
{
	return a+b+c;
}

double S(double a,double b,double c)
{
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
	tri t;
	t.point1.x=1;
	t.point1.y=1;
	t.point2.x=2;
	t.point2.y=3;
	t.point3.x=3;
	t.point3.y=4;
	if(isTri(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3)))
	{
		cout<<"�ܳ�:"<<C(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3))<<endl;
		cout<<"���:"<<S(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3))<<endl;
	}
	else
	{
		cout<<"�޷�����������" ; 
	}
	return 0;
}

