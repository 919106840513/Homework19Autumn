using namespace std;
#include <iostream>
int main()
{
	int num;
	cout<<"����һ��������";
	cin>>num;
	int n,m;
	n=num;
	m=0;
	while(n!=0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(m==num) cout<<"�����ǻ�������";
	if(m!=num) cout<<"�������ǻ�������";
	return 0;
}
