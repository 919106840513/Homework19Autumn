#include <iostream>
#include <math.h> 
using namespace std;
//��ƺ� 
#define S(a,b,c) (a+b+c)/2
#define A(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c)) 

int main (void)
{
	float a=0,b=0,c=0,area=0,s=0;
	cout<<"���������ε����"<<endl;
	cout<<endl;
	cout<<"�����������ε������߳�"<<endl; 
	cin>>a>>b>>c;
	s=S(a,b,c);
	area=A(s,a,b,c);
	if (area==0)
		cout<<"�������β�����"<<endl;
	else
		cout<<"�����ε����="<<area<<endl;
	return 0;
}
