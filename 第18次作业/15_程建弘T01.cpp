/*
1����ָ��ʵ��strcat��������Ҫ��string.h
*/ 
#include<iostream>
#include<algorithm >
using namespace std;
int len(char*s){
	int i=0;
	while(*s++){
		i++;
	}
	return i;
}
void strcat(char*to,char*from){
	if(to==NULL||from==NULL){
		return ;
	}
	int i=0;
	int len1=len(to);
	int len2=len(from);
	while(i<min(len1,len2)&&(*to++=*from++)){
		i++;
	}
}
int main(){
	char s1[]="12345";
	char s2[]="666";
	char s3[]="eqfsdgdsg";
	cout<<"Ŀ�괮\t"<<s1<<endl;
	cout<<"Դ��1\t"<<s2<<endl;
	strcat(s1,s2);
	cout<<"Ŀ�괮\t"<<s1<<endl;
	cout<<"Դ��1\t"<<s2<<endl;
	strcat(s1,s3);
	cout<<"Ŀ�괮\t"<<s1<<endl;
	cout<<"Դ��2\t"<<s3<<endl;
}
