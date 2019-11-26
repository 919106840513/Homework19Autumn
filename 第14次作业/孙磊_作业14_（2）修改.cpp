#include<iostream>
#include<math.h>
using namespace std;

struct Point{
	int x, y;
};

struct Trangle{
	Point a, b, c;	//����Point 
};

double distanFunc(Point a, Point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));	
}

void tranFunc(Trangle t){
	double x, y, z;
	x=distanFunc(t.a, t.b);//cout<<x<<endl;		//�������߳��� 
	y=distanFunc(t.b, t.c);//cout<<y<<endl; 
	z=distanFunc(t.a, t.c);//cout<<z<<endl;
	if(x+y-z<=0||y+z-x<=0||z+x-y<=0){
		cout<<"���ܹ��������Σ�";
	}
	else{
		cout<<"�ܳ�Ϊ��"<<x+y+z<<endl;
		double p=(double)(x+y+z)/2;
		cout<<"���Ϊ��"<<sqrt(p*(p-x)*(p-y)*(p-z))<<endl;
	}
}

//���� 
int main(){
	Point a, b;	
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;	//�������������� 
	cout<<distanFunc(a, b)<<endl;
	Trangle t;
	cin>>t.a.x>>t.a.y;
	cin>>t.b.x>>t.b.y;	//�������������� 
	cin>>t.c.x>>t.c.y;
	tranFunc(t);
	return 0;
} 
