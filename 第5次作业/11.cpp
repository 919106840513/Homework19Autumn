#include <iostream>;
using namespace std;
int func(int n);
int main() {
	cout << "��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�" << endl;
	cout << "�����£�";
	int i = 1, n = 0;
	cin >> i;
	for (int j = 1; j <= i; j++) {
		n=func(j);
		cout << n<<endl;
	}
	return 0;
}
int func(int n) {
	if (n == 1 || n == 2)return 1;
	return func(n - 1) + func(n - 2);
}