using namespace std;
#include <iostream> 
#include <string.h>
#define MAX 4
int GetRev(char a[])
{
	int i,j,count=0;
	for(i=0;i<strlen(a)-1;i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]>a[j]) count++;
		}
	}
	return count;
}
void Sort(int e[],char a[][20])
{
	int i,j,k,x,min;
	k=-1;
	min=9999;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			if(e[j]<min)
		{
			min=e[j];
			k=j;
		}
		}
		for(x=0;x<strlen(a[k]);x++)
		{
		   cout<<a[k][x];
		}
		cout<<" ������Ϊ��"	<<min<<endl;
		e[k]=9999;
		min=9999;
		k=-1;			
	}
}
int main()
{
	char a[MAX][20];
	int i;
	cout<<"�����ĸ��ַ���"<<endl;
	for(i=0;i<MAX;i++)
	{
	   cin.getline(a[i], 20);
	}
	int e[4];
 for(i=0;i<MAX;i++)
	{
	   e[i]=GetRev(a[i]);
	}
    Sort(e,a);
    return 0;
}
