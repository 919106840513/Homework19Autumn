#include<iostream>
using namespace std;
int Num(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if (num % i == 0) sum += i;
	}
	return sum;
}
int main(){
	int n;
	cout<<"������һ��������"<<endl;
	cin>>n;
	cout<<"����������Ϊ��";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"1-100֮�����ȫ��"<<endl;
	for(int i=2;i<=100;i++){
		if(Num(i)==i){
			cout<<i<<" ";
		}
	}
}



