#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	if (a<b){
	   temp = b;
	   b = a;
	   a = temp;
}
	int n1 = a;
	int n2 = b;
	while(n2!=0){
		temp = n1%n2;
		n1 = n2;
		n2 = temp;
	}
	cout<<"���Լ��Ϊ"<<n1<<endl;
	cout<<"��С������Ϊ"<<a*b/2<<endl;
	return 0;
	   
	  
	  

} 
