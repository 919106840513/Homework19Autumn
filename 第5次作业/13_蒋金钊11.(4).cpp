#include<iostream>
using namespace std;
int main(void){
	int count = 0;
	char a;
	while(1){
		
		a = cin.get();
		if(a==10) break;
		if(a>=48&&a<=57) count++;
		
	}
	cout<<"�����ַ����е������ַ�����Ϊ:"<<count<<endl;
	return 0;
} 
