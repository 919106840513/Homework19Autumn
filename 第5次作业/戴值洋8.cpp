using namespace std;
#include <iostream>
main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
	  cout<<i<<"*"<<j<<"=";
	  cout.setf(std::ios::left);//����� 
	  cout.width(3);//��λ��� 
	  cout<<result;
    }
    cout<<endl;; /*ÿһ�к���*/
  }
  cin.get();
}
