/*

��Ŀ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц���� 
1.�����������i�����У�j�������У�j����i�ı仯����������ڷ���ĸ�����

*/

#include <iostream>
#include "conio.h"
using namespace std;
int main()
{
  int i,j;
  cout<<"\1\1"<<endl; /*�������Ц��*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<"\219\219";
    cout<<endl;
  }
  getch(); 
}
