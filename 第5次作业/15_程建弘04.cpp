/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬����
����������������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
*/

#include <iostream>
#include "conio.h"
using namespace std;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
  int day,month,year,sum,leap;
  cout<<"please input year,month,day"<<endl;
  cin>>year>>month>>day;
  for(int i=1;i<month;i++){
  	sum+=a[i-1];
  }
  sum=sum+day; /*�ټ���ĳ�������*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*�ж��ǲ�������*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*������������·ݴ���2,������Ӧ�ü�һ��*/
    sum++;
  cout<<"It is the "<<sum<<" th day.";
  getch(); 
}
