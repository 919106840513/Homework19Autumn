#include<iostream>
using namespace std;



int max(int m,int n)
{
	if(m>=n)
	{
		return m;
	}
	else
	{
		return n;
	}
}
void toHex(int x)
{
	cout<<hex<<x;
}

int main()
{
	int a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
    toHex(max(a,b));
    return 0;
}
