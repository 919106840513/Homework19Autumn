/*
(2)��дһ������������������� C(n, k) =n! / (k!�� (n-k)!)��
���� n�� k Ϊ���������� n >k��
�ֱ���� C(4��2)�� C(6�� 4)�� C(8�� 7)���������
*/ 

#include<iostream>
using namespace std;
int jiechen(int m){
	if(m==1){
		return 1;
	}
	return m*jiechen(m-1);
} 
int main(){
	int n,k;
	
	cout<<"C(4��2)= "<<jiechen(4)/(jiechen(2)*jiechen(2))<<endl;
	cout<<"C(6��4)= "<<jiechen(6)/(jiechen(4)*jiechen(2))<<endl;
	cout<<"C(8��7)= "<<jiechen(8)/(jiechen(7)*jiechen(1))<<endl;
	
	//�������� 
	cout<<"��������Ҫ����������C(n,k)��n��k"<<endl;
	cin>>n>>k;
	cout<<endl;
	cout<<"C("<<n<<","<<k<<")= "<<jiechen(n)/(jiechen(k)*jiechen(n-k));
	
} 
