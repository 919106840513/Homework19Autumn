/*
(7)���һ�����򣬰������������λ��������� �������� 3456����� 6543��
*/ 
#include<iostream>
using namespace std;
void ditui(int a){
	if(a==0){
		return;
	}
	cout<<a%10;
	ditui(a/10);
} 
int m=0;
int digui(int a){
	if(a==0){
		return m;
	}
	m=m*10+(a%10);
	a/=10;
	digui(a);
}
int main(){
	cout<<"������һ������"<<endl;
	int x;
	cin>>x;
	cout<<"�����㷨�ķ������Ϊ��" <<endl;
	ditui(x);cout<<endl; 
	cout<<"�ݹ��㷨�ķ������Ϊ��" <<endl;
	cout<<digui(x)<<endl;	
}
