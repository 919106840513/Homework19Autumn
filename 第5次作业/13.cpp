#include<iostream>
using namespace std;
int main() {
	cout << "��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153 = 1�����η���5�����η���3�����η���" << endl;
	cout << "ˮ�ɻ�����" << endl;
	for (int a = 1,n=1; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			for (int c = 1; c <= 9; c++) {
				n = a * 100 + b * 10 + c;
				if (n == a * a * a + b * b * b + c * c * c)cout << n << endl;
			}
		}
	}
	
	return 0;

}