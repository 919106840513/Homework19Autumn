#include <iostream>
using namespace std;
long factorial(long a){
	if(a==1)
	return 1;
	else return a*factorial(a-1);
}
int main(){
    long n,k;
    cout<<"��������n��k��ֵ��Ҫ��n>k"<<endl;
    cin>>n>>k;
    cout<<"c(n,k)="<<factorial(n)/(factorial(k)*factorial(n-k))<<endl;
	 } 
