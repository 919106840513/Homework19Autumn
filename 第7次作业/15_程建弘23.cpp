/*
��ӡ
*/
#include<iostream>
using namespace std;
int main(){
	cout<<"������ױ߳��Ⱥ͸߶�"<<endl; 
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b/2;i++){
		for(int j=b/2-i;j<b/2;j++){
			cout<<" ";
		}
		for(int k=0;k<a;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=b/2-1;i>=0;i--){
		for(int j=i;j>0;j--){
			cout<<" ";
		}
		for(int k=0;k<a;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}
