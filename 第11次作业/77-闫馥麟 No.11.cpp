//����ˮ�ɻ���

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,p;
	cout<<"���������ˮ�ɻ����ı�����˵�ֵ"<<endl;
	cin>>n>>m;
	if (n>m)
	cout<<"�������Ķ˵�ֵ�Ƿ���ȷ"<<endl;
	else
	{
		cout<<"�ñ������ڵ�ˮ�ɻ������£�"<<endl;
		for (p=n;p<=m;p++)
		{
			i=p%10;     //��λ 
			j=p/10%10;   //ʮλ 
			k=p/100;     //��λ 
			if (p==(i*i*i+j*j*j+k*k*k))
			cout<<p<<endl;
		}
	} 
	
	return 0;
}


//�жϻ�����

#include<iostream>
using namespace std;

bool isHui(unsigned long long num)
{
	if (num<0||(num>0&&num%10==0))
	return false;
	unsigned long long back=0;
	while (num>back)
	{
		back=back*10+num%10;
		num=num/10;
	}
	return ((num==back)||(num==back/10));
}

int main(void)
{
	unsigned long long num=0; 
	cout<<"������һ��������"<<endl;
	cin>>num;	
	if (isHui(num))
	cout<<"���ǻ�����"<<endl;
	else 
	cout<<"�ⲻ�ǻ�����"<<endl;
	return 0;
} 


//�ж���ȫ��

#include<iostream>
using namespace std;

bool isWan(unsigned long num)
{
	unsigned long sum=0;
	for (unsigned long a=1;a<num;a++)
	{
		if (num%a==0)
		{
			sum=sum+a;
		}
	}
	if (sum==num)
	return true;
	else
	return false;
} 

int main ()
{
	unsigned long num;
	cout<<"��ȫ�����ж�"<<endl;
	cout<<"������һ��������"<<endl;
	cin>>num;
	if (isWan(num))
	cout<<"����ȫ��"<<endl;
	else 
	cout<<"������ȫ��"<<endl;
	return 0;
} 
