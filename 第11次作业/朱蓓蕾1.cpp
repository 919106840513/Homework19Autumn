#include<iostream>
using namespace std;
int max(int x,int y){
if(x>=y) 
return x;
else
return y;}
int main(){
	cout<<"��������������"<<endl; 
	int i,j,n,m;
	cin>>i>>j;
	cout<<i<<"��"<<j<<"֮���ˮ�ɻ����У�"<<endl; 
	i=i+j-max(i,j);
	j=max(i,j);
	for(n=i;n<=j;n++)
	{int k=0,sum=0;
	m=n;
	 while(m!=0)
	{
	k=m%10;
	sum+=k*k*k;
	m/=10;
	}if(sum==n)
	cout<<n<<'\t';
	}
	return 0;
}
