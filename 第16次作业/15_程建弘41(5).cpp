/*
(5)����һ���ַ��������������ֺͷ������ַ����磺
abc2345 345rrf678 jfkld945
������������������Ϊһ�����������δ�ŵ�һ�����������С���������ϵ����룬�� 2345 ��ŵ� b[0]��
345 ���� b[1]�� ...��ͳ�Ƴ��ַ����е������������������Щ������
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	cout<<"����һ���ַ�����"<<endl;
	char s[100];
	char p[100][100];
	char *pp[100];
	cin.getline(s,100);
	int num=0;
	
	for(int i=0;i<strlen(s);i++){
		int n=0;
		while(s[i]>='0'&&s[i]<='9'){		
			p[num][n++]=s[i];
			i++;
		}
		pp[num]=p[num];
		if(n){
			num++;
		}
	}
	cout<<"���������� "<<num<<endl;
	cout<<"��Щ���ǣ� "<<endl;
	for(int i=0;i<num;i++){
		cout<<pp[i]<<endl;
	}
}
