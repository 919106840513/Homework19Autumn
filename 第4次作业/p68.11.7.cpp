#include <iostream>;
using namespace std;
int main() {
	cout << "ǰ��ʮ�����ʾÿһ���ĸ�ͷ��ӡ�" << endl;
	int a = 2, b = 1;
	cout << a << "/" << b<<endl;
	for (int c = 1, n = 1; n <= 20; n++) {
		c = b;
		b = a;
		a = c + b;
		cout << a << "/"  << b <<  endl;
	}
	return 0;
}