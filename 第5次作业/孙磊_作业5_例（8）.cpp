#include <iostream> 
#include <iomanip>
//#include "conio.h"
using namespace std;
int main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
     // cout<<setw(3)<<i<<'*'<<j<<'='<<result;  //�Բ��롣�� 
	  printf("%d*%d=%-3d",i,j,result); /*-3d��ʾ����룬ռ3λ*/
    }
    cout<<endl; /*ÿһ�к���*/
  }
  //getch();
  return 0;
}
