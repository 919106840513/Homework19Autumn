#include <iostream>
using namespace std;
#include <math.h>
int main()
{
	int i,j;
	cout<<"��������������i j(i<j):";
	cin>>i>>j;
	int sum,a,K; 
	cout<<i<<"��"<<j<<"֮���ˮ�ɻ����У�";
	for(int k=i;k<=j;k++)
	{
		sum=0;
		K=k;
		while(K!=0)
		{
			a=K%10;
			sum+=pow(a,3);
			K/=10;
		}
		if(sum==k)
		cout<<k<<" ";
	}
	return 0;
} 
