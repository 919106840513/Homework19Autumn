#include <iostream>
using namespace std;
int main()
{
  int a,b,num1,num2,temp;
  cout<<"please input two numbers:\n";
  cin>>num1>>num2;
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
  cout<<"gongyueshu:\n"<<a<<endl;
  cout<<"gongbeishu:\n"<<num1*num2/a<<endl;
  return 0;
}
