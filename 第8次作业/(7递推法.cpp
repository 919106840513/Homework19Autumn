#include<iostream>
using namespace std;
int main()
{
	int x,t;
	cout<<"������һ������";
	cin>>x;
	while(x!=0)
	{
		t=x%10;
		cout<<t;
		x=x/10;
	}
	return 0;
}
