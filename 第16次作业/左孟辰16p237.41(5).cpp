#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *str = new char[100];
	cout<<"����һ���ַ�����"<<endl;
	cin.getline(str, 100);
	int num=0, count=0;
	int numArr[50]={0};
	for(int i=0;i<strlen(str)+1;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			num=num*10+(int)str[i]-48;	//�ַ� 0 ASCII��Ϊ48 
		}
		else if(!(str[i]>='0'&&str[i]<='9')
				 &&((str[i+1]>='0'&&str[i+1]<='9')
				 ||str[i+1]=='\0'))
				 {
			numArr[count++]=num;
			num=0;
		}
	}
	cout<<"����������:"<<count<<endl;
	cout<<"�ֱ��ǣ�"<<endl; 
	for(int i=0;i<count;i++) 
		cout<<numArr[i]<<' ';
	return 0;
}
