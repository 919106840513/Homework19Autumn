//��ҵ��6��
#include<iostream>
using namespace std;

//��������շת����� 
//���Ʒ��� 
int gcd1(int a, int b) {
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
} 	

//�ݹ鷽�� 
int gcd2(int a,int b){
	if(b == 0)
	return a;
	else
	return gcd2(b,a%b);
}

//��С������=�˻�/���Լ�� 
int lcm(int a, int b){
	return a*b/gcd1(a, b);
}	

//���� 
int main(){
	int a=8,b=6;
	int c=15,d=4; 
	cout<<gcd1(a,b)<<endl;
	cout<<gcd2(a,b)<<endl;
	cout<<gcd1(c,d)<<endl;
	cout<<gcd2(c,d)<<endl;
	cout<<lcm(a,b)<<endl;
	cout<<lcm(c,d)<<endl;
	return 0;
}
