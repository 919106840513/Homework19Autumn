#include <iostream>
using namespace std;
int main(){
	int m,n,a,b,i;
	cout<<"������������������";
	cin>>m>>n;
	if(m<n){
	   i=m;
	   m=n;
	   n=i;
	   }
	a=m;
	b=n;
	while(b!=0)
	{
		i=a%b;
		a=b;
		b=i; 
	}
	cout<<"���Լ��Ϊ��"<<a;
	cout<<"��С������Ϊ��"<<m*n/a;
	return 0; 
}

