//(8) 
#include<iostream>
#include<string.h>
using namespace std;

int getWordCount(char a[]){
	int count=1;
	for(int i=0;i<strlen(a)-1;i++){
		if((a[i]==' '||a[i]=='\t')&&a[i+1]!=' '&&a[i+1]!='\t')
		count++;		//���ַ�Ϊ�ո��tab�����¸��ַ���Ϊ�ո��tab
	}
	return count;
}

//���� 
int main(){
	char a[]="Sunday's coming I   WANNA 	drive my car";
	cout<<getWordCount(a);	//���Ϊ 7 
}
