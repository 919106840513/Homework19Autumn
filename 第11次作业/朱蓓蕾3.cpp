#include<iostream>
using namespace std;
int max(int x,int y){
if(x>=y) 
return x;
else
return y;}
int main()
{
	cout<<"��������������"<<endl; 
	int i,j,n,m;
	cin>>i>>j;
	cout<<i<<"��"<<j<<"֮�����ȫ���У�"<<endl; 
	i=i+j-max(i,j);
	j=max(i,j);
	for(n=i;n<=j;n++)
	{int sum=0;
	  for(int k=1;k<n;k++)
	  {if(n%k==0)
	  sum+=k;
	  }if(sum==n)
	  cout<<n<<'\t';
	}
	return 0;
}
