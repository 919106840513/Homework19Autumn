#include <iostream>
using namespace std;
int gongyue(int a,int b)
{
  int temp,c,d;
  if(a<b)
  {
    temp=a;
    a=b;
    b=temp;
  }
  c=a;d=b;
  while(d!=0)
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  return c;
}
int gongbei(int a,int b)
{
	return a*b/gongyue(a,b);
} 
int main()
{
	int a,b,c;
	cin>>a>>b;
	cout<<"��С��Լ����"<<gongyue(a,b)<<endl;
	cout<<"��С��������"<<gongbei(a,b);
	return 0; 
}
