#include <iostream>;
using namespace std;
int main() {
	cout << "�������ɸ��ַ���ͳ����������ָ�����" << endl;
	char ch = 0;
	int count = 0;
	for (;ch != '\n'; ) {
		ch = cin.get();
		if (ch < 48 || ch>57)continue;
		count++;
	}
	cout << "���ָ����� " << count << endl;
	return 0;
}