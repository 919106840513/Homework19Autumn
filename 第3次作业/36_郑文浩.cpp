//918107820336  36֣�ĺ� ��������ҵ 
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;                    //��һС�� 
	cin >> num;
	for (int i = 31; i >= 0; i--) {
		cout << (num >> i & 1);
	}
	cout << endl;
	
	int a, b, c;               //����С�� 
	cout << "ax^2+bx+c=0" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	int s = b * b - 4 * a*c;
	if (s < 0)
		cout << "�˷�����ʵ��" << endl;
	else if (s == 0)
		cout << "�˷�����Ψһ��ʵ��:" << -b / (2 * a);
	else
		cout << "�˷�������ʵ��" << (-b + sqrt(s)) / (2 * a) << "," << (-b - sqrt(s)) / (2 * a)<< endl;
	return 0;
}
