#include <iostream>
using namespace std;
int max(int a, int b){
   if (a > b) 
     return a;
   else 
     return b;
}
int min(int a, int b){
	if (a > b) 
     return b;
   else 
     return a;
}
int main()
{int m,n,i,j,k;
cout<<"please input two numbers:";
cin>>m>>n;
m=max(m,n);
n=min(m,n);
if(m%n==0){
	cout<<"���Լ��Ϊ��"<<n<<endl;
	cout<<"��С������Ϊ��"<<m<<endl;
	 }
else{
  for(i=n-1;i>=1;i--){
	if(n%i==0&&m%i==0)
	 cout<<"���Լ��Ϊ��"<<i<<endl;}
  for(j=2;j<=n;j++){
   k=j*m;
    if(k%n==0)
     cout<<"��С������Ϊ:"<<k<<endl;}
}

}
