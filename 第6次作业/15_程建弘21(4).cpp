/*
(4)�������������Ϊ 2 ��һ���������� 3 �� 5�� 5 �� 7�� 11 �� 13�� 
���һ��������� 500 ֮��������������
*/ 

#include<iostream>
#include<iomanip>
using namespace std;
int prime[501],pNum=0;
bool p[501]={0};

void FindPrime(){
	for(int i=2;i<501;i++)
		if(p[i]==false){
			prime[pNum++]=i;
			for(int j=i+i;j<501;j+=i)
				p[j]=true;
		}
}
int main() {
	int n;
	FindPrime();
	cout<<"500���ڵ�������������: "<<endl;
	int num=0;	
	for(int i=0;i<pNum;i++){
		if(prime[i+1]-prime[i]==2){
			cout<<setw(3)<<prime[i]<<"��"<<setw(3)<<prime[i+1]<<" ";
			num++;
		}
		if(num%5==0){
			cout<<endl;
			num+=1;
		}	
	}
}
