#include <iostream> 
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
  int i,j,result;
  cout<<"\n";
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<'\0'<<j<<'\0'<<result; /*-3d��ʾ����룬ռ3λ*/
    }
    cout<<"\n"; /*ÿһ�к���*/
  }
  return 0;
}
