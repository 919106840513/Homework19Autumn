#include<iostream>
using namespace std;

//����ת������ 
//���Ʒ��� 
void turn1(int n){
	while(n){
		cout<<n%10;
		n/=10;
	}		
}

//�ݹ鷽��
void turn2(int n){
	if(n){
		cout<<n%10; 
		turn2(n/10);
	}
}

//���� 
int main(){
	int n;
	while(cin>>n){
		turn1(n); cout<<endl;
		turn2(n); cout<<endl;
	}
	return 0; 	
} 
