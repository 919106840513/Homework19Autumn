#include<iostream>
using namespace std;

//����ת������ 
int turn(int n){
	int sum=0;
	while(n!=0){
		sum=sum*10+n%10;
		n/=10;
	}	
	return sum;	
}
//���� 
int main(){
	int n;
	while(cin>>n){
		cout<<turn(n)<<endl;
	}
	return 0; 	
} 
