/*
(9)��֪�����ε������߳�Ϊ a��b��c���������ε����Ϊ��
���� s=(a+b+c)/2�����һ�������������ε������ 
*/ 
#include<iostream>
#include<math.h>
#define s(a,b,c) (a+b+c)*0.5
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
using namespace std;
int main(){
	float a,b,c;
	cout<<"�����������εĳ����"<<endl;
	cin>>a>>b>>c;
	cout<<"�����ε�����ǣ� "<<area(a,b,c)<<endl;
} 
