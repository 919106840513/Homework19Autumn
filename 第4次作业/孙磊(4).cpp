//���Ĵ���ҵ 2019.10.11
//(4) 
#include<iostream>
using namespace std;
int main()
{
	char ch=0;
	int count=0;
	cout<<"�����ַ�����"; 
	do{
	ch = cin.get();//��ȡ�ַ� 
	if(ch>='0'&&ch<='9')//���ַ�Χ 
	 count++;
	}while(ch!='\n');//ѭ������ 
	 cout<<"��������Ϊ��"<<count<<endl; 
	 return 0;
 } 
