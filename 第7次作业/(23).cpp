using namespace std;
#include <iostream>
int main()
{
  int i,j,k;
  int a,b;
  cout<<"������ƽ���ı��εĵױ߳��Ⱥ͸߶ȣ�"; 
  cin>>a>>b;
  for(i=0;i<=b-1;i++)
  {
    for(j=0;j<=i-1;j++)
      cout<<" ";
    for(k=0;k<=a-1;k++)
      cout<<"*";
    cout<<endl;
  }
  cout<<endl;
  cout<<endl;
  for(i=0;i<=b-1;i++)
  {
    for(j=0;j<=2-i;j++)
      cout<<" ";
    for(k=0;k<=a-1;k++)
      cout<<"*";
    cout<<endl;
  }
  return 0;
}
