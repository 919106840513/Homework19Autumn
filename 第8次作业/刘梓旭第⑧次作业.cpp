T6
#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"please input two numbers"<<endl;
cin>>a>>b;
for(int i=a-1;i>=1;i--){
    if(a%i==0&&b%i==0){
     cout<<a<<"和"<<b<<"的最大公因数是"<<i<<endl;
     break;}
}
for(int j=b+1;j>=b;j++){
  if(j%a==0&&j%b==0){
   cout<<a<<"和"<<b<<"的最小公倍数是"<<j;
  break;} 
}
return 0; 
}
T7
ditui 
#include<iostream>
using namespace std;
int main ()
{cout<<"请输入一个整数X：";
int x;
cin>>x;
for(;x!=0;x/=10)
cout<<x%10;

return 0;
} 

digui
#include<iostream>
using namespace std;
int f(int x){
	if(x!=0)
	{cout<<x%10;	
	}
	
return f(x/10);
}
int main (){
	int x;
cout<<"请输入一个整数X:";
cin>>x;
f(x);
return 0;
} 
