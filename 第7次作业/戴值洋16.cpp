using namespace std;
#include <iostream>
int GCD(int m,int n)
{
	if(m%n==0)
    return n;
    else
    return GCD(n,m%n);	 
}
int LCM(int m,int n)
{
	int gcd=GCD(m,n);
	return m*n/gcd;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<"���Լ��Ϊ��"<<GCD(m,n)<<" ��С������Ϊ��"<<LCM(m,n); 
	return 0;
}
