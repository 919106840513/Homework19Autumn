#include<iostream>
using namespace std;
bool func(unsigned long a);
int main() {
	cout << "��һ��������X���ֽ�������������С���������" << endl;
	cout << "������X��";
	unsigned long a = 2;
	cin >> a;
	if (a < 2)return 0;
	cout << a << " = ";
	for (unsigned long b = 2; b <= a; b++) {
		if (func(b)) {
			for (; a % b == 0;) {
				a /= b;
				cout << b << " * " ;
			}
		}
	}
	cout << "\b\b";
	return 0;
}
bool func(unsigned long a) {
	for (unsigned long i = 2; i < a; i++) {
		if (a % 2 == 0)return 0;
	}
	return 1;
}