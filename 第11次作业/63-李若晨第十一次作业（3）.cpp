#include<iostream>
using namespace std;
int main()
{
	int i,j,a,b;
	cout<<"��������������С����ǰ";
	cin>>i>>j;
	for(;i<=j;i++)
   {
	for(a=1,b=0;a<i;a++)
	 {if(i%a==0)
	 b=b+a;
	 }
	 if(b==i)
	 cout<<i<<" ";
   }
}
