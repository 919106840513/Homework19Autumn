//��23����ƽ���ı���
#include<iostream>
using namespace std;
#include "conio.h"
int main() {
	int l,d;
	cout<<"����ױ߳���l���͸߶�d��";
	cin>>l>>d;
	cout<<"��һ��ƽ���ı��Σ�"<<endl; 
	for(int i=1; i<=d; i++) {
		int k=i-1;
		while(k) {
			cout<<' ';
			k--;
		}
		for(int j=1; j<=l; j++) {
			cout<<'*';
		}
		cout<<endl;
	}
	cout<<endl<<"�ڶ���ƽ���ı��Σ�"<<endl;
	for(int i=d; i>=1; i--) {
		int k=i-1;
		while(k) {
			cout<<' ';
			k--;
		}
		for(int j=1; j<=l; j++) {
			cout<<'*';
		}
		cout<<endl;
	}
	
	return 0;
}

