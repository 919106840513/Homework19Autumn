/*
(9)��֪�����ε������߳�Ϊ a��b��c���������ε����Ϊ��
���� s=(a+b+c)/2�����һ�������������ε������ 
*/ 
#include<iostream>
#include<math.h>
using namespace std;
float figure(int a,int b,int c){
	int s=(a+b+c)*0.5;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
	float a,b,c;
	cout<<"�����������εĳ����"<<endl;
	cin>>a>>b>>c;
	cout<<"�����ε�����ǣ� "<<figure(a,b,c)<<endl;
} 
