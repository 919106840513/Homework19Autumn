#include <iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cout<<"'water flower'number is:"<<endl;
  for(n=100;n<1000;n++)
  {
    i=n/100;/*�ֽ����λ*/
    j=n/10%10;/*�ֽ��ʮλ*/
    k=n%10;/*�ֽ����λ*/
    if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
      cout<<n<<endl;
  }
  return 0;
}
