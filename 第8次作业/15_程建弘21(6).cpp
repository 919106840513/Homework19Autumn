/*
(6)��д���������ֱ�����������������Լ������С������
*/ 
#include<iostream>
using namespace std;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	cout<<"��������������"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"�������������Լ���ǣ�"<<gcd(x,y)<<endl;
	cout<<"������������С�������ǣ�"<<lcm(x,y)<<endl;
} 
