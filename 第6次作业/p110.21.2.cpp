#include <iostream>
using namespace std;
int fact(unsigned int a);
int main() {
	cout << "���������C��n,k��������n,kΪ����������n>k��" << endl;
	cout << "n,k:";
	unsigned int n = 1, k = 1;
	double c = 1;
	cin >> n >> k;
	if (n <= k) return 0;
	c = fact(n) / fact(k) / fact(n - k);
	cout << "�����C��" << n << "," << k << "):" << c<<endl;
	n = 4; k = 2;
	c = fact(n) / fact(k) / fact(n - k);
	cout << "�����C��" << n << "," << k << "):" << c<<endl;
	n = 6; k = 4;
	c = fact(n) / fact(k) / fact(n - k);
	cout << "�����C��" << n << "," << k << "):" << c<<endl;
	n = 8; k = 7;
	c = fact(n) / fact(k) / fact(n - k);
	cout << "�����C��" << n << "," << k << "):" << c<<endl;
	return 0;
}
int fact(unsigned int a) {
	unsigned long d = 1;
	for (unsigned int i = 1; i <= a; i++) {
		d *= i;
	}
	return d;
}