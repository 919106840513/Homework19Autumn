#include<iostream>
using namespace std;
int main ()
{int x,y,a[32];
cout<<"����������";
cin>>y;
if(y>=0)
  x=y;
else x=-y-1;
for(int i=0;i<32;i++)
{
 a[i]=x%2;
 x=x/2;
}
cout<<"�������Ϊ";
for(int i=31;i>=0;i--)
{if(y>=0)
   cout<<a[i];
 else cout<<!a[i];
}
return 0;
} 

