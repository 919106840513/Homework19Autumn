using namespace std;
#include<iostream>
int main(void)
{
	int x,i,j,sum;
	cin>>x;
	for(i=1;i<x;i++)
	if(x%i==0) cout<<i<<" ";
	cout<<endl;
	cout<<"1��100֮�����ȫ��Ϊ";
	for(i=1;i<=100;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0) sum+=j;
		}
		if(sum==i) cout<<i<<" ";
	}
	return 0;
 } 
