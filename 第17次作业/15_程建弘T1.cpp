/*
1 ���һ���������β�Ϊ����һ���ַ����������еĴ�д��ĸת����Сд��ĸ��
Ҫ���β���ָ�룬��������ָ����д���
*/ 
#include<iostream>
using namespace std;
void Toarr(char*s){
	int i=0;
	while(*s){
		if(*s>='A'&&*s<='Z'){
			*s+=32;
		}
		s++;
	}
}
int main(){
	char s[]={"asfSDAdsDVS"};
	char*p=s;
	Toarr(p);
	cout<<"���Ϊ��"<<endl<<s<<endl; 
} 

