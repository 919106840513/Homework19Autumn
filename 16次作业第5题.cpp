	/*����һ���ַ��������������ֺͷ������ַ���
	�磺 abc2345  345rrf678  jfkld945 ������������������Ϊһ�����������δ�ŵ�һ�����������С�
	��������ϵ����룬�� 2345 ��ŵ� b[0]�� 345 ���� b[1]��...��
	ͳ�Ƴ��ַ����е������������������Щ����*/

#include <iostream>
#include <string.h>
using namespace std;
int strlength (const char *pa) {
	if (pa==NULL) return 0;
	const char *pa1=pa;
	while (*pa++!=0);
	return pa1-pa-1;
}

int main ( ){
	char a[100];
	cin.getline(a,100);
	const char * pa=a;
    //int	num=strlength(pa);
	int i=0,j=0,b[100];
	for (;*(pa+i);i++){
		int sum=0; 
		while (*(pa+i)>='0'&&*(pa+i)<='9'){
			sum=sum*10+(*(pa+i)-'0');
			i++;	
		}
		if (sum!=0) b[j++]=sum;
	}
	cout<<"�ַ����������ĸ���Ϊ"<<j<<endl;
	cout<<"�ֱ���:"<<endl;
	cout<<'\t';
	for (int k=0;k<j;k++)
		cout<<b[k]<<" ";
	return 0;
}
