using namespace std;
#include <iostream>
int sum(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n=n/10;
	}
	return s;
}
int factor(int n)
{
	int a,s,i,m;
	s=0;
	m=n;
	while(n!=1)
	{
		for(i=2;i<m;i++)
		{
			if(n%i==0)
			{
				a=i;
				break;
			}
		}
		n=n/a;
		while(a!=0)
	{
		s+=a%10;
		a=a/10;
	}
	}
	return s;
}
bool isSmith(int n)
{
	if(sum(n)==factor(n))
	return true;
	return false;
}
int main()
{
	int n,i;
	cout<<"������һ������"<<endl; 
	cin>>n;
	if(isSmith(n))
	cout<<"����ΪSmith��"<<endl; 
	for(i=n+1;;i++)
	{
		if(isSmith(i))
		{
			cout<<"��һ��Smith��Ϊ��"<<i<<endl;
			break; 
		 } 
	}
	return 0;
}
