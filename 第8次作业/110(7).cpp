#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"������һ��������";
	cin>>n;
	while(n!=0)
	{
		cout<<n%10;
		n=n/10;
	}
}

