#include<iostream>
using namespace std;
int main(){
	char *strcat(char *a1,char *a2);
	char b1[20]={"abc"};
	char b2[20]={"def"};
	cout<<"������������һ���ַ���Ϊ'abc'���ڶ����ַ���Ϊ'def'"<<endl; 
	char *a1=b1;
	char *a2=b2;
	cout<<strcat(a1,a2);
}
char *strcat(char *a1,char *a2){
	char *origin = NULL;
	origin = a1;
	while (*a1)
		a1++;
	while (*a2){
		*a1 = *a2;
		a2++;
		a1++;
	}
return origin;
}
