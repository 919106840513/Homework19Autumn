/*
(5)���һ�����򣬶��������һ�������� x��
�ֽ�������������С�������������������������磬
12=2*2*3�� 13=13�� 14 = 2*7
*/ 

#include<iostream>
#include<iomanip>
using namespace std;
int s[1010],num=0;
void figure(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0){
			s[num++]=i;
			n=n/i;
			if(n==1){
				break;
			}
			figure(n);
			break;
		}
	}
}
int main(){
	int x;
	cout<<"������һ��������"<<endl;
	cin>>x;
	figure(x);
	cout<<"�ֽ�������: "<<x<<" = ";
	cout<<s[0];
	for(int i=1;i<num;i++){
		cout<<"*"<<s[i];
	}
}

