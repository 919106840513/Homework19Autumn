#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cin>>i>>j;
	cout<<i<<"��"<<j<<"֮���������";
	for(int k=i;k<=j;k++)
	{
		int s=0;
		for(int i=1;i<k;i++)
		{
			if(k%i==0)
			s=s+i;
		}
	    if(s==k)
	    cout<<k<<'\t';
	}
	cout<<endl;
}
