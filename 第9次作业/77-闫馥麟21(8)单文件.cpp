#include <iostream>
using namespace std;

void toHex(int m)
{
	cout<<hex<<m<<endl;
}

int max(int a,int b)
{
	int c;
	c=a>b?a:b;
	return c;
}

int main(void)
{
	int i,j,k;
	cout<<"����������������"<<endl;
	cin>>i>>j;
	k=max(i,j);
	cout<<"�����������ֵΪ"<<endl;
	cout<<k<<endl;
	cout<<"ʮ���������Ϊ"<<endl; 
	toHex(k);
	return 0;
} 
