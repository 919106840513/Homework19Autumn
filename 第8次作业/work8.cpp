21-��6��
#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,z,t;
	cin>>a>>b;
	x=a;
	y=b;
	t=a%b;
	while(t!=0)
	{
		a=b;
		b=t;
		t=a%b;
	}
	z=x*y/b;
	cout<<"��С��������"<<z<<endl;
	cout<<"���Լ����"<<b<<endl;
    
}

21-��7��
//�ݹ� 
#include <iostream>
using namespace std;
void f(int n)
{
	if(n/10)
	{
		cout<<n%10;
		f(n/10);
	}
	else cout<<n;
} 
int main()
{
	int a;
	cin>>a;
	f(a);
}

//���� 
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a/10) 
	{
		cout<<a%10;
		a=a/10;
	}
	cout<<a;
}


