#include <iostream>
#include "max.cpp"
#include "hex.cpp"
using namespace std;
int main(void)
{
	int a,b;
	cout<<"����a��";
	cin>>a;
	cout<<"����b��";
	cin>>b;
	toHex(max(a,b));
}
