#include <iostream>
using namespace std;
char func(int a);
int main() {
	cout << "�������������λ���������" << endl;
	unsigned int a = 0, b = 0;
	cin >> a;
	b = a;
	for (;;) {                        //����
		cout << a % 10;
		a /= 10;
		if (a == 0)break;
	}
	cout << endl;
	cout << func(b)<<endl;            //�ݹ�
	return 0;

}
char func(int a) {
	if (a == 0) {
		return 0;
	}
	else {
		cout << a % 10;
		return (func(a / 10));
	}
}