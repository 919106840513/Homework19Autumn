#include <iostream>
using namespace std;
int main() {
	cout << "����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿" << endl;
	cout << "�꣬�£��գ�" << endl;
	int a = 1, b = 1, c = 1, d = 0, n = 0;
	cin >> a >> b >> c;
	if (a < 0 || b < 0 || b>12 || c < 0 || c>31) {
		cout << "���ڴ���" << endl;
		return 0;
	}
	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) {
		if (b == 2 && c > 29) {
			cout << "���ڴ���" << endl;
			return 0;
		}
		d = 1;
	}
	else {
		if (b == 2 && c >28) {
			cout << "���ڴ���" << endl;
			return 0;
		}
			d = 2;
	}
	for (int i = 1; i < b; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10) {
				if (i+1 == b && c > 30) {
					cout << "���ڴ���" << endl;
					return 0;
				}
					n += 31;
			}
			else {
				if (i+1 == b && c > 31) {
					cout << "���ڴ���" << endl;
					return 0;
				}
					n += 30;
			}
		
	}
	if (31 * (b - 1) + c <= 60)d = 0;
	cout <<"��"<< n - d + c <<"��"<< endl;
	return 0;
}