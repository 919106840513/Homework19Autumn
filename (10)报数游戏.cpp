using namespace std;
#include <iostream>
int main()
{
	int b,circle[20],alive[20],index; // circle[] 0~20��Ӧ���1~21 alive[] 0~20��Ӧ21���� 0:��Ȧ�� 1:��Ȧ�� 
	b=1;
	index=0; //�±� 
	for(int i=0;i<21;i++)  
	{
		circle[i]=b;
		b=b+1;
	}
	for(int j=0;j<21;j++)
	{
		alive[j]=0;
	}
	for(int number=1;number<=101;number++) //���� 
	{
		while(alive[index]==1) 
		{
			index++;
			if(index%21==0)
			{
				index=0;
			}
		}
		if(number%5==0)
		{
			alive[index]=1;
		}
		index=(index+1)%21; //�������ͼ�1;������Ϊ0,��ʼ��һ�� 
	}
	for(int k=0;k<21;k++)
	{
		if(alive[k]==0) //Ѱ��Ψһһ����Ȧ�ڵ��˵��±� 
		{
			index=k;
			break;
		}
	}
	cout<<circle[index]; //������ 
	return 0;
} 
