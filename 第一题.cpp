using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
char H(char *q){
	for(;*q!='\0';q++)
	   if(*q>='A'&&*q<='Z')
	       *q=*q+32;	
}
main(){
	char a[100];
	gets(a);
	char *q=a; 
	H(q);
	cout<<a;
    for(;*q!='\0';q++) cout<<*q;
	return 0;
}
//��ҵ��1 ���һ���������β�Ϊ����һ���ַ����������еĴ�д��ĸת����Сд��ĸ��Ҫ���β���ָ�룬��������ָ����д���
