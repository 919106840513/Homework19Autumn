#include<iostream>
using namespace std;
int max(int m,int n); 
int toHex(int x);
int main()
{
	int a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	cout<<toHex(max(a,b))<<endl;
}
