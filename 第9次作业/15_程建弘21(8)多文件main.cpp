#include <iostream>
using namespace std;

#include"hex.h"
#include"max.h"
int main() {
	cout<<"��������������"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"ʮ��������ʽ��ʾ�����ֵ"<<endl;
	toHex(max(x,y));
	return 0;
}
