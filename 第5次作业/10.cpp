#include <iostream>;
using namespace std;
int main() {
	cout << "��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����" << endl;
	cout <<  "*����Ц��*"<< endl;
	for (int a = 1; a <= 11; a++) {
		for (int b = 1; b <= a; b++) {
			cout <<'\001'<<" ";
		}
		cout << endl;
	}

	return 0;
}