using namespace std;
#include <iostream>
int divisor(int a,int b)
{
  int temp,c,d;
  if(a<b)
  {
    temp=a;
    a=b;
    b=temp;
  }
  c=a;d=b;
  while(d!=0)/*����շ������ֱ��bΪ0Ϊֹ*/
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  return c;
}
int main()
{
	int a,b,c;
	cout<<"please input two numbers:"<<endl;
	cin>>a>>b;
	c=divisor(a,b);
	cout<<"��Լ��="<<c<<endl;
	cout<<"������="<<a*b/c;
	return 0; 
}
