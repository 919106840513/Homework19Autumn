using namespace std;
#include <iostream>
int main ()
{
	//��x������ 
	int x;
	cout<<"������һ����������"; 
	cin>>x;
	cout<<x<<"������Ϊ��"<<endl; 
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		cout<<i<<endl;
	}
	//��100���ڵ���ȫ��
	int sum; 
	cout<<"100���ڵ���ȫ��Ϊ��"<<endl; 
	for(int j=1;j<=100;j++)
	{
		sum=0;
		for(int k=1;k<j;k++)
		{
			if(j%k==0)
			{
				sum+=k;
			}
		}
		if(sum==j)
		{
			cout<<j<<endl;
		}
	}
	return 0;
}
