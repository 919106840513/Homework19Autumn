/*��дһ������������ n>2�������� n ����ͬ���ȵ��ַ�����Ȼ�����Щ�����ж��ּ��㡣
  ���磬 �������ݽ������򣬼���ÿ�����ظ����ֵĴ���������������������
  Ҫ���ܼ��� n ���ֵ��Ҳ���ܰ��� ��ÿ����ͳһ��������ڴ��˷ѡ� */ 

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
#define N1 10
#define N2 20 
int main ( ){
	char  *a[N2];
	for (int i=0;i<N1;i++)
		cin>>a[i];
	const int num=sizeof(a)/sizeof(char*);
	sort (a,a+num,[](auto s1,auto s2){return strcmp(s1,s2)<0;});
	for (auto s:a)
		cout<<s<<endl;
	return 0;
} 
