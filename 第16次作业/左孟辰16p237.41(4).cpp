#include<iostream>
#include<string.h>
using namespace std;
void bubbleSort(char * strs[], int n)
{		
	char *temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0)
			{
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}
void numSort(char*strs[], int n)
{
	int *num = new int[n]; //�������� 
	for(int i=0;i<n;i++)
	{
		num[i]=0;
		for(int j=0;j<n;j++)
			if(strcmp(strs[i], strs[j]) == 0)
				num[i]++;
	}
	char *temp;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(num[j]<num[j+1])
			{ 
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
				swap(num[j], num[j+1]);
			}
}
void input(char *str1[], int n)
{
	char *str0 = new char[20];
	for(int i=0;i<n;i++)
	{
		cout<<"�����"<<i+1<<"���ַ�����"<<endl; 
		cin.getline(str0, 20);
		str1[i] = new char[strlen(str0)+1];
		strcpy(str1[i], str0);
	}
}
void output(char *str1[], int n)
{
	for(int i=0;i<n;i++)
		cout<<str1[i]<<endl;
}
int main()
{
	int n;
	cout<<"����n(n>2):"; 
	cin>>n;cin.get();
	char *str[10];
	input(str, n);
	cout<<endl;
	cout<<"���ֵ������У�"<<endl;
	bubbleSort(str, n); //�ֵ���ð������ 
	output(str, n);
	cout<<"*********************"<<endl; 
	cout<<"���ַ������ִ�������"<<endl; 
	numSort(str, n);
	output(str, n);
	return 0; 
}
