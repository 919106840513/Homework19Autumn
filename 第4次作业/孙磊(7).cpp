//���Ĵ���ҵ 2019.10.11
//(7) 
#include<iostream>
using namespace std;
int main()
{	
	cout<<"��1��:"<<1<<'/'<<2<<endl; //��һ��������ɣ�����ǰ�� 
	int a=3,b=2,temp;
	for(int i=2;i<=20;i++)
	{
		cout<<"��"<<i<<"��:"<<a<<'/'<<b<<endl; 
		temp=a;
		a=a+b;//����Ϊǰһ�����+��ĸ 
		b=temp;// ��ĸΪǰһ����� 
		
	}
 } 
