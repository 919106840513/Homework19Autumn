//(1) 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int i, j;
	cout<<"Input i & j:"<<endl;
	while(cin>>i>>j){
		if(i>j) swap(i, j); //���� 
		for(i;i<=j;i++){
			int sum=0, a=i;
			while(a!=0){
				sum+=pow(a%10, 3);//���λ�����η� 
				a/=10;
			}
			if(i == sum) cout<<i<<endl; //�ж� 
		}
	} 
	return 0;
 } 
