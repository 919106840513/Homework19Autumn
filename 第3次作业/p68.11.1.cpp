#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 1;
	cout << "����һ��int��������ʾΪȫ��λ��(Ĭ��32λ)�Ķ�������ʽ��" << endl;
	cout << "����:" ;
	cin >> a;
	for (int i = 32, n = 1; n <= i; n++) {                          //�޸�i��ֵ�����Ըı�Ĭ��λ��
		b = (a >> (i - n)) & 1;
		cout << b;
	}
	return 0;
}