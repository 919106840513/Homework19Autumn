/*
(7) һ������ set �еĸ���Ԫ���໥֮�䲻��ȡ� �ȱ�дһ�������� 
int getSet(int rs[], const int a[], int n)�������� a ��ȡ���໥���ȵ�Ԫ�أ��������� rs �У������� rs ��Ԫ�صĸ�����
��ʱ���� rs �и�Ԫ�ض�����ȣ��͹���һ������ set��
���磺 a={3, 1, 2, 3, 1, 5, 2, 1}����ô���rs={3, 1, 2, 5}������ 4���Ȳ�����֤�ú�������ȷ�ԡ�
Ȼ���ٳ������һ�������������ܵõ��������飬���ҵõ������и�Ԫ�س��ֵĴ�����
�������������м��� rs={3, 1, 2, 5}�� ���и�Ԫ�س��ִ����ֱ�Ϊ{2�� 3�� 2�� 1}��
�����һ�������� �������еĸ�Ԫ�ذ����ִ����������� ����������Ԫ�ؼ�����ִ����� 
���磬�����������������£���ʾ��ʽΪ��Ԫ��ֵ�����ִ�������
1:3
3:2
2:2
5:1
*/
#include<iostream>
using namespace std;
const int maxn=1010;
int hash[maxn]={0};
int getSet(int rs[], const int a[], int n){
	int m=0;
	for(int i=0;i<n;i++){
		if(hash[a[i]]==0){
			hash[a[i]]++;
			rs[m++]=a[i];
		}
		else{
			hash[a[i]]++;
		}
	}
	return m;
}
void print1(int rs[],int n){
	for(int i=0;i<n;i++){
		cout<<rs[i]<<":"<<hash[rs[i]]<<endl;
	}
}
void print2(int rs[],int n){
	for(int i=0;i<n;i++){
		int max=hash[rs[i]];
		for(int j=i;j<n-1;j++){
			if(max<hash[rs[j+1]]){
				int temp=rs[j];
				rs[j]=rs[j+1];
				rs[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<rs[i]<<":"<<hash[rs[i]]<<endl;
	}
}

int main(){
	int a[1010]={3, 1, 2, 3, 1, 5, 2, 1},rs[1010];
	int m1=0,m2=0;
	while(a[m1++]!=0){
		m2++;
	}
	int num=getSet(rs,a,m2);
	cout<<"������Ԫ�ظ�����"<<num<<endl;
	cout<<"��Ԫ�س��ִ���"<<endl;
	print1(rs,num);
	cout<<"��������󣬸�Ԫ�س��ִ���"<<endl;
	print2(rs,num);
}

  
