#include<iostream>
using namespace std;
char* toLow(char *s){
	char*b=s;              //��λ��ַ 
	while(*s!=0){
		if(*s>='A'&&*s<='Z'){
			*s=*s +32;
		}
		s++;
	}
	return b;
}
int main(){
	char a[20];
	cin.getline(a,20);
	cout << toLow(a) <<endl;
}
