using namespace std;
#include <iostream>
int main()
{
	int x,g,s,b,q,w;
	cout<<"����һ����λ��"<<endl;
	cin>>x;
	g=x%10;
	s=(x/10)%10;
	b=(x/100)%10;
	q=(x/1000)%10; 
	w=(x/10000)%10;
	if(g==w&&s==q)
	cout<<"�����ǻ�����"<<endl;
	else
	cout<<"�������ǻ�����";
	return 0; 
}
