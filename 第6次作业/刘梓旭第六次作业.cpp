T2. 
#include<iostream>
using namespace std;
float m(int x){
int a,b=1;;
for(a=1;a<=x;a++){
b*=a;
}
return b;	
}
int main () {
	int n,k;
cout<<"������n��k(n>k)"<<endl;
cin>>n>>k;
if (n<=k)
 cout<<"�����ֵ����"<<endl;
cout<<"C("<<n<<","<<k<<")��ֵΪ"<<m(n)/m(k)/m(n-k)<<endl;
return 0;
}
T4.
#include<iostream>
using namespace std;
bool isPrime(int n){	
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 ||n == 7)	
		return true;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main(){
int a;
cout<<"500���ڵ�ȫ������������";
for(a=1;a<=500;a=a+2)
{if (isPrime(a)==1&&isPrime(a+2)==1)
 cout<<a<<" "<<a+2<<endl;
}
return 0;

}
T5.
#include<iostream>
using namespace std;
bool isPrime(int n){	
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 ||n == 7)	
		return true;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main (){
int x,i,y;
cout<<"������һ��������";
cin>>x;
y=x;
if(isPrime(x)==1)
 cout<<x<<"="<<x<<endl;
cout<<x<<"=";
for(i=2;i<y;i++){
	if(x%i==0&&isPrime(i)==1){
    cout<<i;
    x=x/i;     
	i=2; 
	if(x>=2)
	cout<<"*";          	}
	
}
return 0;

}
