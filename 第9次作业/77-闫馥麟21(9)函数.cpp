#include <iostream>
#include <math.h> 
using namespace std;
//��ƺ���
float area(float a,float b,float c)
{
	float s=0,area=0;
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
} 

int main (void)
{
	float a=0,b=0,c=0;
	cout<<"���������ε����"<<endl;
	cout<<endl;
	cout<<"�����������ε������߳�"<<endl; 
	cin>>a>>b>>c;
	if (area(a,b,c)==0)
		cout<<"�������β�����"<<endl;
	else
		cout<<"�����ε����="<<area(a,b,c)<<endl;
	return 0;
}
