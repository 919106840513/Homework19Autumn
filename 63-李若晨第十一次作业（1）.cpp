#include<iostream>
using namespace std;
int main()
{
	int i,j,k,m,n,a,b;
	cout<<"����������λ����С����ǰ"; 
	cin>>i>>j;
	cout<<"��ˮ�ɻ������У�"; 
	for(;i<=j;i++)
	{
	a=i%10;
	b=(i/10)%10;
	k=i/100;
	if(a*a*a+b*b*b+k*k*k==i)
	cout<<i<<" ";
	}
}
