#include <iostream>
using namespace std;
int main() {
	double a = 1, b = 1, c = 1, d = 1;
	cout << "��һԪ���η���:ax^2 + bx + c = 0�ĸ���" << endl;
	cout << "a b c" << endl;
	cin >> a; cin >> b; cin >> c;
	d = b * b - 4 * a * c;
	if (d < 0) {
		cout << "�÷�����ʵ������" << endl;
	}
	else if (d == 0) {
		cout << "�÷�����Ψһʵ������x=" << -b / 2 / a << endl;
	}
	else {
		cout << "�÷���������ʵ������x1=" << (-b + d) / 2 / a << "  x2=" << (-b - d) / 2 / a << endl;
	}
	return 0;
}