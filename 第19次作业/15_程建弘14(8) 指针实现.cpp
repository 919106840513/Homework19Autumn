/*
(8)��дһ�������� int getWordCount(char a[])��ͳ���ַ��� a �еĵ��ʸ���������֮����һ
�������ո�� tab ��������
*/
#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char *a){
	int num=0;
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(((*(a+i)>='a'&&*(a+i)<='z')||(*(a+i)>='A'&&*(a+i)<='Z'))&&(*(a+i+1)==' '||*(a+i+1)=='\0')){
			num++;
		}
	}
	return num;
}
int main(){
	char a[1010]={"\tEveryone has that period in which they  find those who are close to them start to seem annoying"};
	cout<<"�ַ���Ϊ��"<<endl<<a<<endl;
	cout<<"�ַ�������Ϊ��"<<endl<<getWordCount((char *)a)<<endl;
}
