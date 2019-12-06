/*
(6)�ȱ�дһ�������� int getRev(char a[])�� ���㲢�����ַ��� a ������
����ĸ����һ���ַ����У� ������� i<j���� a[i]>a[j]����� a[i]�� a[j]���� 1 ������
����"DAABEC"�������� 5������ D �� A�� A�� B�� C ���� 4 ������ E �� C ���� 1 ������
Ҫ���������� MAX ���ַ���(MAX ��һ���ֵ꣬Ϊ>2 ��������)��ÿ���������� 20 ���ַ���
�ȼ�����������������ٰ����������������������������
*/
/*��������
DAABEC
ABBBCDDD
BDCBDCCA
BCCDEEA 
*/ 
#include<iostream>
#include<string.h>
#define MAX 4
using namespace std;
int getRev(char *a){
	int len=strlen(a);
	int num=0;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(*(a+i)>*(a+j)){
				num++;
			}
		}
	}
	return num;
}
int main(){
	char a[MAX][20]={"DAABEC","ABBBCDDD","BDCBDCCA","BCCDEEA"};
	int b[MAX];
	for(int i=0;i<MAX;i++){
		*(b+i)=getRev((char*)a);
	}
	for(int i=0;i<MAX-1;i++){
		for(int j=i;j<MAX;j++){
			if(*(b+i)>*(b+j)){
				int temp=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=temp;
				char s[20];
				strcpy(s,*(a+i));
				strcpy(*(a+i),*(a+j));
				strcpy(*(a+j),s);
			}
		}
	}
	for(int i=0;i<MAX;i++){
		cout<<"������: "<<*(b+i)<<" �ַ�����" <<*(a+i)<<endl;
	}
} 
