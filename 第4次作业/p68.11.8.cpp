#include <iostream>;
using namespace std;
int main() {
	cout << "����һ������������ʾ���������ӣ��ڴ˻��������1-100֮�����ȫ����" << endl;
	int a = 2, b = 1;
	cin >> a;
	cout << "����������Ϊ��";
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			cout << i << ' ';
		}
	}
	cout << endl;
	cout << "1-100֮�����ȫ��Ϊ��" << endl;
	for (int count = 1,j=0; count <= 100; count++) {
		for (int i = 1; i < count; i++) {
			if (count % i == 0) {
				j+=i;
			}
		}
		if (count == j) {
			cout << j << ' ';
		}
		j = 0;
	}
	return 0;
}