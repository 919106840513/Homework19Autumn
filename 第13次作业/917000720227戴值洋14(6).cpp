#include <iostream>
using namespace std;
#include <string.h>
#define MAX 5 

int getRev(char a[])
{
	int num=0;
	for(int i=0;i<strlen(a)-1;i++)
	{
		for(int j=i+1;j<strlen(a);j++)
		{
			if(a[i]>a[j])
			{
				num++;
			}
		}
	}
	return num;
} 

void sort(char a[][20])
{
	char b[20];
	for(int i=0;i<MAX-1;i++)
	{
		for(int j=0;j<MAX-1-i;j++)
		{
			if(getRev(a[j])>getRev(a[j+1]))
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}
	}
}

int main()
{
	char a[MAX][20];
	for(int i=0;i<MAX;i++)
	{
		cin.getline(a[i],20);
	}
	cout<<"������������������Ϊ��"<<endl;
	sort(a);
	for(int j=0;j<MAX;j++)
	{
		for(int k=0;k<strlen(a[j]);k++)
		{
			cout<<a[j][k];
		}
		cout<<" ������Ϊ��"<<getRev(a[j])<<endl;
	}
	return 0;
}

