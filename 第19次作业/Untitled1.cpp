#include <iostream>
#include <string.h>
using namespace std;
#define MAX 5
int getRev (char a[20]){
	int count=0;
	for (int i=0;*(a+i+1);i++){ 
		for (int j=i+1;*(a+j);j++)
			if (*(a+i)>*(a+j))	count++; 
	}
	return count;
}

void bubbleSort (int b[],char a[][20]){
	int temp1;
	char temp2[1][20];
	for (int i=0;i<MAX-1;i++)	
		for (int j=0;j<MAX-i-1;j++)
			if (b[j]>b[j+1]){
				temp1=b[j];		strcpy(temp2[0],a[j]);
				b[j]=b[j+1];	strcpy(a[j],a[j+1]);
				b[j+1]=temp1;	strcpy(a[j+1],temp2[0]);
			} 
}

int main (){
	char a[MAX][20];					//MAX=5
	int b[MAX];							//�����洢ÿ���ַ����������� 
	for (int i=0;i<MAX;i++)
		cin.getline(*(a+i),20);			//��������ַ��� 
	for (int i=0;i<MAX;i++)
		b[i]=getRev(*(a+i));				//grtRev���������������ĺ��������������ó���һ�е������ַ�����Ϊ�����Ĳ�����
										//Ҳ���ǶԵ�һ���ַ�����ÿһ���ַ����бȽϡ���ԭ������ָ���ʱ������ǶԵ�
										//�Ҳ�֪�������ָ������ʾ������� 
	bubbleSort(b,a);
	for(int i=0;i<MAX;i++)
		cout<<a[i]<<"   "<<b[i]<<endl;
	return 0; 
}
