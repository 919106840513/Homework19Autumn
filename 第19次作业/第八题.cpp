using namespace std;
#include <iostream>
#include <string.h>
int getWordCount(char a[]){
	char *p=a;int count=0;
	for(;*p!='\0';p++)
	   if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
	   count+=1;
	cout<<"���ʵĸ���Ϊ��"<<count<<endl;
}
main(){
	char a[50];
	gets(a); //��������������Ǻ� 
	getWordCount(a);
	return 0;
}
