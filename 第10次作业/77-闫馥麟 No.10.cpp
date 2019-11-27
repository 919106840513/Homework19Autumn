//  144ҳ14 (2)

#include <iostream>
#include <stdlib.h>
using namespace std;

void getRandom(int a[],int n)
{
	int i;
	srand (a[0]);
	for(i = 0; i < n; i++)
		a[i] = rand() % 100;
}

int getMax(const int a[],int n)
{
	int i=0,j,max,maxindex;
	max=a[i];maxindex=i;
	for (j=1;j<n;j++)
	{
		if (a[j]>max)
		{
			max=a[j];
			maxindex=j;
		}
			
	}
	return maxindex;
}

int main(void)
{
	int n,maxvalue,maxindex;
	cout<<"��������������ĸ���"<<endl;
	cin>>n;
	int a[n];
	getRandom(a,n);
	maxindex=getMax(a,n);
	cout<<"���ֵ��"<<a[maxindex]<<endl;
	cout<<"�±꣺"<<maxindex<<endl;
	return 0;
}


//  144ҳ14 (5)

#include <iostream>
using namespace std;

bool notSushu(long int n)
{
	if (n<=3)
	return false;
	for (int i=2;i<=(n-1);i++)
	{
		if (n%i==0)
		return true;
		else 
		return false;
	}
}

int shuSum(long int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}

int zysSum(long int n)
{
	int zyssum=0,i=2;
	for ( ;i<=n;i++)
	{
		while(i!=n)
		{
			if (n%i==0)
			{
				zyssum=zyssum+shuSum(i);
				n=n/i;	
			}
			else
			break;		
		}	
		if (n==i)
		zyssum+=shuSum(i);
	}
	return zyssum;
}

bool isSmith(long int n)
{
	if (notSushu(n) && (shuSum(n)==zysSum(n)))
	return true;
	else 
	return false;
}

int main (void)
{
	int n;
	cout<<"������һ��������"<<endl;
	cin>>n;
	if (isSmith(n))
		cout<<"������ʷ��˹��"<<endl;
	else
		cout<<"��������ʷ��˹��"<<endl;
	
	cout<<"���ڵ���4937774����һ��ʷ��˹��"<<endl; 
	for (long int t=4937774; ;t++)
	{
		if (isSmith(t))
		{
			cout<<t<<endl;
			break;
		}
	}
	return 0;
}


//  144ҳ14 (10)

#include <iostream>
using namespace std;
int main (void)
{
	cout<<"��������"<<endl;
	int n=21; //������
	int people[n];
	
	int i;
	for (i=0;i<n;i++)   //�����ų�ֵ 
	{
		people[i]=i+1;
	} 
	
	int k=5;   //�߳����еı������� 
	
	int j=0,num=n;
	for(i=1; ;i++)
	{
		if (i>n)  //��ʼ�� 
		i=1;
		
		if (people[i-1]!=0)   //����0ֵ�� 
		j++;
		
		if (j==k)      //�߳����� 
		{
			people[i-1]=0;
			num--;
			j=0;
		}
		
		if (num==1)    //ʣ��1��ʱ����ѭ�� 
		break;
	}
	for(i=0;i<n;i++)
	{
		if (people[i]!=0)
		cout<<"���һ�˵ı��Ϊ��"<<people[i]<<endl;
	}
	return 0;
}
