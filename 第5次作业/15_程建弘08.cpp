/*
��Ŀ�����9*9�ھ���
1.����������������п��ǣ���9��9�У�i�����У�j�����С�

*/

#include <iostream>
#include<iomanip>
#include "conio.h"
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
      //cout<<setiosflags(ios::left)    //���������������ո��ں�
      cout<<i<<"*"<<j<<"="<<setw(2)<<result<<" ";
    }
    cout<<endl; /*ÿһ�к���*/
  }
  getch();
}

