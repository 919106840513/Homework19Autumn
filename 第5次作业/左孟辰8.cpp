using namespace std;
#include <iostream>
main()
{
  int i,j,result;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<'*'<<j<<'='<<result<<"  ";
    }
    cout<<'\n'; /*ÿһ�к���*/
  }
  return 0;
}
