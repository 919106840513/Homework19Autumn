using namespace std;
#include <iostream>
int main()
{
  int a,b,num1,num2,temp;
  cout<<"please input two numbers:\n";
  cin>>num1;
  cin>>num2;
  if(num1<num2)/*������������ʹ��������num1��*/
  {
    temp=num1;
    num1=num2;
    num2=temp;
  }
  a=num1;b=num2;
  while(b!=0)/*����շ������ֱ��bΪ0Ϊֹ*/
  {
    temp=a%b;
    a=b;
    b=temp;
  }
  cout<<"�������:"<<a<<'\n';
  cout<<"��С������:"<<num1*num2/a;
  return 0;
}

