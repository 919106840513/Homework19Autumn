//	"50��"��2��  �����������

#include <iostream>
#include<stdlib.h>
using namespace std;
int main (void)
{
	long int i,bt,b1,b2,b3,b4,b5;
	cout<<"����������"<<endl;
	cin>>i;
	cout<<'\n';
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.05;
	b4=b3+200000*0.03;
	b5=b4+400000*0.015;
	switch(i/100000)
	{
		case 0: bt=i*0.1;
		break;
		case 1: bt=b1+(i-100000)*0.075;
		break;
		case 2: 
		case 3:bt=b2+(i-200000)*0.05;
		break;
		case 4: 
		case 5:bt=b3+(i-400000)*0.03;
		break;
		case 6: 
		case 7:
		case 8:
		case 9:bt=b4+(i-600000)*0.015;
		break;
		default:bt=b5+(i-1000000)*0.01;
	} 
	cout<<"�������Ϊ��"<<' '<<bt<<endl;
	system("pause");
	return 0;
} 

//  "50��"��13��  ����"ˮ�ɻ���"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int i,j,k,m,count=0;
	cout<<"���е�ˮ�ɻ������£�"<<endl;
	cout<<'\n';
	for (m=100;m<1000;m++)
	{
		i=m/100;
		j=m/10%10;
		k=m%10;
		if (i*i*i+j*j*j+k*k*k==m)
		{
			cout<<setw(5)<<m;
			count++;
			if (count%5==0)
				cout<<'\n';
		}	
	}
	cout<<'\n';
	system("pause");
	return 0;
}

//"50��"��16��  ���������������Լ������С������

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int a,b,c,m,t;
	cout<<"�������1��������������\"Enter\"��"<<endl;
	cin>>a;
	cout<<"�������2��������������\"Enter\"��"<<endl;
	cin>>b;
	if (a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while (c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	cout<<"���Լ����:"<<' '<<b<<endl;
	cout<<"��С��������:"<<' '<<m/b<<endl;
	cout<<'\n';
	system("pause");
	return 0;
}

//"50��"��23��  ��ӡ������״��ƽ���ı���

#include <iostream>
#include<stdlib.h>
using namespace std;
int main (void)
{
	int i,j,k,d,h;
	cout<<"ƽ���ı���"<<endl;
	cout<<"�������"<<endl;
	cin>>d;
	cout<<"�������"<<endl;
	cin>>h;
	cout<<'\n';
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=d;j++)
		{
			if (j<i&&j==1)
			{
				for (k=1;k<i;k++)
				cout<<" ";
			}
			  
			cout<<"*";
			if (j==d)
			cout<<endl;
		}
	}
	cout<<'\n';
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=d;j++)
		{
			if (i<h&&j==1)
			{
				for (k=1;k<=(h-i);k++)
				cout<<" ";
			}
			cout<<"*";
			if (j==d)
			cout<<endl;
		}
	}
	system("pause");
	return 0;
} 

