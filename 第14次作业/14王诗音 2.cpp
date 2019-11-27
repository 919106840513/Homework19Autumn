#include<iostream>
#include<math.h>
using namespace std;

struct Point{
	int x,y;
};

struct Triangle{
	Point a,b,c;
	bool f;
	double C,S;
};

double distan(Point a,Point b)
{
	double d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return d;
}

int main()
{
	Triangle t;
	double n,m,d1,d2,d3,p;
	cout<<"�����������꣺"<<endl;
	cin>>t.a.x>>t.a.y;
	cin>>t.b.x>>t.b.y;
	cin>>t.c.x>>t.c.y;
	n=1.0*(t.a.x-t.b.x)/(t.a.y-t.b.y);
	m=1.0*(t.a.x-t.c.x)/(t.a.y-t.c.y);
	if(fabs(n-m)<=1e-6){
		t.f=0;
		t.C=t.S=0;
	}
	else{
		t.f=1;
		d1=distan(t.a,t.b);
		d2=distan(t.a,t.c);
		d3=distan(t.c,t.b);
		t.C=d1+d2+d3;
		p=t.C/2;
		t.S=sqrt(p*(p-d1)*(p-d2)*(p-d3));
	}
	if(t.f){
		cout<<"�ܹ���������"<<endl;
		cout<<"�ܳ�C="<<t.C<<"  ���S="<<t.S<<endl;
	} 
	else cout<<"���ܹ���������"<<endl;
	return 0;
}
