#include<iostream>
 using namespace std;
 bool isPrime(unsigned n){	
 	if (n < 2)
 		return false;
 	if (n == 2 || n == 3 || n == 5 ||n == 7)	
 		return true;
 	for (int i = 2; i*i <= n; i++)
 		if (n % i == 0)
 			return false;
 	return true;
 }
 bool isSmith(int x)
 {int i,y,sum1=0,sum2=0;
 y=x;
 for(;y!=0;y/=10)
 {i=y%10;
 sum1+=i;
 }
 int j=2;
 for(;j<x;j++)
 {if(x%j==0&&isPrime(j)==1)
      {sum2+=j;
       x/=j;
      }
 }
 if(sum1==sum2)
 return true;
 else return false;
 }
 int main()
 {int n;
 cout<<"������һ������������n��";
 cin>>n;
 if(isPrime(n)==1){
 	cout<<"�����������";
 	return 0;
 }
 if (isSmith(n)==1)
 cout<<"������Smith��"<<endl;
 else cout<<"��������Smith��"<<endl;
 for(int a=4937775;a++;)
 {if(isSmith(a)==1)
 {cout<<"4937774����һ��ʷ��˹����"<<a;
 break;
 }
 }
 return 0;
 }
