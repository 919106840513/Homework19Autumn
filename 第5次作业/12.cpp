#include <iostream>;
using namespace std;
bool func(int n);
int main() {
	cout << "�ж�101-200֮���ж��ٸ����������������������" << endl;
	int m = 0;
	for (int j = 101; j <= 200; j++) {
		if (func(j)) {
			cout << j << endl;
			m++;
		}
	}
	cout << "һ��" << m << "��������" << endl;
	return 0;
}bool func(int n) {
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}