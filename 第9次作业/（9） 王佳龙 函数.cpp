#include <iostream>
#include <math.h>
using namespace std;
int f(int a,int b,int c){
	int s,d;
	s=(a+b+c)/2;
	d=sqrt(s*(s-a)*(s-b)*(s-c));
	return d;
}
int main(){
	int area,a,b,c,d,s;
	cout<<"�ֱ�����a,b,c��ֵ"<<endl;
	cin>>a>>b>>c;
	cout<<"���Ϊ"<<f(a,b,c)<<endl; 
}
