#include <iostream>
using namespace std;
int max(int a,int b);
void toHex(int m);
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
