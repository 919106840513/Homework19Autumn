//144ҳ14��6�� 

#include <iostream>
#include <string.h>
#define MAX 4
using namespace std;

//�����ַ���a��������ֵ 
int getRev(char a[])
{
	int count=0,length=0;
	length=strlen(a);
	for (int i=0;i<length;i++)
	{
		for (int j=i+1;j<length;j++)
		{
			if (a[i]>a[j])
				count ++;
		}
	}
	return count;
}


//ð������
void setOrder(int nixu[],char a[][21])
{
	int temp=0;char temp2[21];
	for (int i=0;i<MAX-1;i++)
	{
		for (int j=0;j<MAX-1-i;j++)
		{
			if (nixu[j+1]<nixu[j])
			{
				temp=nixu[j];
				nixu[j]=nixu[j+1];
				nixu[j+1]=temp;
				strcpy(temp2,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp2);
			}
		}
	}
}

 
//������ 
int main()
{
	int nixu[MAX];char a[MAX][21];
	cout<<"������4���ַ���"<<endl;
	for (int k=0;k<MAX;k++)
		cin>>a[k];
	for (int p=0;p<MAX;p++)
		nixu[p]=getRev(a[p]);
	setOrder (nixu,a);
	cout<<"��Щ�ַ���������ֵ�����������Ϊ��"<<endl;
	for (int k=0;k<MAX;k++)
		cout<<a[k]<<' '<<nixu[k]<<endl;
	return 0;
}




//144ҳ14��8��

#include <iostream>
#include <string.h>

using namespace std;

int getWordCount(char a[])
{
	int count=0;
	//cin.get(a,101);
	for (int i=0;i<strlen(a);i++)
	{
		if ((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			count++;
			while ((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
				i++;
		}
	}
	return count;
}


int main()
{
	char a[101];
	cin.get(a,101);
	cout<<getWordCount(a)<<endl;
} 
