/*
2.�ο��̲ĵ�8.16���⣬ȥ��һ���ַ����е����пո��� ab c 1 2 3 �����ձ�Ϊabc123��trim����ԭ����8.16һ�¡� 
*/
#include<iostream>
#include<string.h>
using namespace std;
char*trim(char*s){
	if(s==NULL)return NULL;
	if(strlen(s)==0)return s;
	int num=0;
	char*another;
	for(int i=0;i<strlen(s);i++){
		if(*(s+i)!=' '){
			*(another+num++)=*(s+i);
		}
	}
	another[num]='\0';
	return another;
}
int main(){
	char s[]=" ab c 1 2 3 ";
	cout<<"ԭ��\t\t"<<s<<endl;
	char*s1=trim(s);
	cout<<"�����\t"<<s1<<endl;
	return 0;
} 
/*�� 
char*trim(char*s){
	if(s==NULL)return NULL;
	if(strlen(s)==0)return s;
	int num=0;
	char a[100];
	char*another=a;
	for(int i=0;i<strlen(s);i++){
		if(*(s+i)!=' '){
			*another++=*(s+i);
			num++;
		}
	}
	*another=0;
	another=another-num;
	return another;
}
*/
