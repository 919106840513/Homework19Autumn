#include <iostream>
using namespace std;
bool isprime(unsigned n){
	if(n<2)
	return false;
	if(n==2||n==3||n==5||n==7)
	return true;
	for(unsigned i=2;i*i<=n;i++)
	if(n%i==0)
	return false;
}
int f (int n){
	int  a;
	int sum=0;
	while (n!=0){
	a=n%10;
	n/=10;
	sum+=a;
   }
   return sum;}
int h(int n){
	int sum=0,a,j;
for(int i=2;i<=n;i++){
	while(n%i==0){
		j=i;
		while(1){
		a=i%10;
		sum+=a;
		i=i/10;
		if(i==0)
		break;}
		i=j;
		n=n/i;
	}
}return sum;
}
int issmith(int n){
	if(isprime(n)==0&&f(n)==h(n)){
		return 1;}
	else
    return 0;
}
int main(){
	int n,m;
	cout<<"����һ������"<<endl; 
	cin>>n;
	if(issmith(n))
	cout<<"��ʷ��˹��"<<endl;
	else
	cout<<"����ʷ��˹��"<<endl;
	for(m=4937774;1;m++)
	if(issmith(n)){
	cout<<"49377774��һ��ʷ��˹���ǣ�"<<m;
	break;} 
}





