using namespace std;
#include <iostream>
int main()
{
  int a,b,num1,num2,temp;
  cout<<"please input two numbers:\n";
  cin>>num1>>num2;
  if(num1<num2)
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
  cout<<"��Լ��:"<<a<<endl;
  cout<<"������:"<<num1*num2/a<<endl;
  return 0;
}
