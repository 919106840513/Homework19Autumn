#include<iostream>
#include<string.h>
using namespace std;
char * trim(char * s) {
	if (s == NULL) return NULL;
	if (strlen(s) == 0) return s;
	char *s1 = new char; //�������ַ��� 
	int j=0;
	for(int i=0;s[i]!=0;i++){	//����ԭ�ַ��� 
		if(s[i]!=' '){
			s1[j]=s[i];		//���ǿո���Ƶ����ַ��� 
			j++;
		}
	}
	s1[j]='\0';		//β�� 
	return s1;
}


int main() {
	char s[] = "   sun Lei ZUO ye 18    !";
	cout<<strlen(s);     //���ԭ����
	char * s1 = trim(s);
	cout<<":"<<s1<<":"<<strlen(s1)<<endl; //�������֮��Ĵ�������
	return 0;
}
