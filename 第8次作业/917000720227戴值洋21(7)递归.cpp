using namespace std;
#include <iostream>
void reverse(int n)
{
	if(n>=0&&n<=9)
	{
		cout<<n;
	}
	else
	{
		cout<<n%10;
		reverse(n/10);
	}
} 
int main()
{
	int x;
	cout<<"������һ��������"; //������int���� 
	cin>>x;
	reverse(x);
	return 0;
}
