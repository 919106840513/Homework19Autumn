#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"��������������i j(i<j):";
	cin>>i>>j;
	cout<<i<<"��"<<j<<"֮�����ȫ���У�";
	int sum,m;
	for(int k=i;k<=j;k++)
	{
		sum=1;
		for(int m=2;m<=k/2;m++)
		{
			if(k%m==0)
			{
				sum+=m;
			}
		}
		if(sum==k)
		cout<<k<<" ";
	}
	return 0;
}

