#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"����һ���ַ�����"<<endl;
	char s[100];
	char p[100][100];
	char *pp[100];
	cin.getline(s,100);
	int num=0;

	for(int i=0;i<strlen(s);i++)
	{
		int n=0;
		while(s[i]>='0'&&s[i]<='9')
		{		
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
	for(int i=0;i<num;i++)
	{
		cout<<pp[i]<<endl;
	}
}
