#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	cout<<"x���������ӣ�";
	for(int i=1;i<x/2+1;i++)
	{
		if(x%i==0)
		cout<<i<<" ";		
	} 
	cout<<endl<<"1~100֮�����ȫ����"; 
	for(int y=1;y<=100;y++)
	{
		int count=0;
		for(int j=1;j<y/2+1;j++)
		{
			if(y%j==0)
			count=count+j;
		}
		if(count==y)
		cout<<y<<" ";		
	}
	cout<<endl;
   return 0;	
}
