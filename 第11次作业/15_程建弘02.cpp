#include<iostream>
using namespace std;
int figure(int m){
	int sum=1;
	for(int j=0;j<=m;j++){
		if(j==m){
			return sum;
		}
		sum*=10;
	}
	return sum;
}
bool Ish(int a){
	int len=0;
	int b=a;
	while(b!=0){
		len++;
		b/=10;
	}	
	for(int i=1;i<=len/2;i++){
		if((a/figure(len-i))%10!=(a/figure(i-1))%10){
			return false;
		}
	}
	return true;
}
int main(){
	int a;
	cout<<"����һ���������ж����Ƿ�Ϊ��������"<<endl; 
	cin>>a;
	if(Ish(a)){
		cout<<"�ǻ�����"<<endl;
	}
	else{
		cout<<"���ǻ�����"<<endl;
	}
}
