#include<iostream>
using namespace std;
void f(int a)
{
	if(a%10==a)
	{
		cout<<a<<endl;
	}
	else
	{ 
	    cout<<a%10;
	    f(a/10);
	} 
}
int main()
{
	int n;
	cout<<"������һ������"<<endl; 
	cin>>n;
	f(n);
	return 0;
	
}
