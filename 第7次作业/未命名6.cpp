#include <iostream>
using namespace std;
int main ()
{
	int m,n,v,a,b,c;
	cin>>m>>n;
	if(m<n){
		v=m;
		m=n;
		n=v;}
	a=m;b=n;
	if(m%n==0){
		cout<<"���Լ��Ϊ"<<b<<endl;
		cout<<"��С������Ϊ"<<a<<endl;} 
	else{
		while(b!=0){
			c=a%b;
			a=b;
			b=c;}
		cout<<"���Լ��Ϊ"<<a<<endl;
		cout<<"��С������Ϊ"<<m*n/a<<endl;}
	return 0;
}
