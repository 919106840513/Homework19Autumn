#include <iostream>
using namespace std;
#include <math.h>
//����int���ͷ�Χ 
int main()
{
	int n;
	cin>>n;
	int num=0,sum=0;
	int m1=n,m2=n;
	while(m1!=0)
	{
		num++;
		m1/=10;
	}
	while(m2!=0)
	{
		num--;
		sum+=m2%10*pow(10,num);
		m2/=10;
	}
	if(sum==n)
	cout<<sum<<"��һ��������";
	else
	cout<<sum<<"����һ��������";
	return 0;
} 
