//��ҵ��6��
#include<iostream>
using namespace std;

//����շת����� 
//���Լ��
int gcd(int a,int b){
	if(b == 0)
	return a;
	else
	return gcd(b,a%b);
}

//��С������=�˻�/���Լ�� 
int lcm(int a, int b){
	return a*b/gcd(a, b);
}	

//���� 
int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<gcd(a,b)<<endl;
		cout<<lcm(a,b)<<endl;	
	}
	return 0;
}
