/*
(2)��д������ void getRandom(int a[], int n)��
���� 0 �� 100 ֮������������Ϊ����Ԫ�ء�
�ٱ�дһ������ int getMax(const int a[], int n)��
������ a ���ҳ����ֵ�������±ꡣ
*/ 
#include<iostream>
#include<cstdlib>
using namespace std;
const int n=100;
void getRandom(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=(rand()%(n+1));
	}
}
int getMax(const int a[], int n){
	int pos=0,max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			pos=i;
			max=a[i];
		}
	}
	return pos;
}
int main(){
	int a[n];
	getRandom(a,n);
	int m=getMax(a,n);
	cout<<"���ֵΪ��"<<a[m]<<endl;
	cout<<"���ֵ�±꣺"<<m<<endl;
} 
