//23��
#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int ans = x > 2 ? (x % 2 == 0 ? 1 : 0) : 0;
	if (ans)
		cout << "��" << endl;
	else
		cout << "����" << endl;
	system("pause");
}
//24��
#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int ans = abs(x) > 8 ? 1 : 0;
	if (ans)
		cout << "��" << endl;
	else
		cout << "����" << endl;
	system("pause");
}
//25��
#include<iostream>
using namespace std;
int main() {
	int A = 1 / 3;             //AֵΪ0
	double B = 1 / 3.0;         //BֵΪ0.333333
	int C = 1 % 3;             //CֵΪ1
	int D = 21 / 3;            //DֵΪ7
	system("pause");
}
//26��
#include<iostream>
using namespace std;
int main() {
	int a = 9, b = 9, c = 9;
	int A = a / 2 + b++ - c++;         //AֵΪ4
	int B = a += b + c++;              //BֵΪ27		���Ե�������ԼӺ��Լ�
	int C = a -= ++b - c--;            //CֵΪ8			���Ե�������ԼӺ��Լ�
	int D = a *= b + c--;              //DֵΪ162		���Ե�������ԼӺ��Լ�
	system("pause");
}
//27��
#include<iostream>
using namespace std;
int main() {
	int A = !('5' > '8') || 3 < 9;			//A��ֵΪ1
	int B = 6 > 3 + 2 - ('0' - 8);			//B��ֵΪ1
	int C = 3 * 5 | 6 << 2;					//C��ֵΪ31
	int D = 'a' == 'b' <= 3 & 5;			//D��ֵΪ0
	system("pause");
}
//28��
#include<iostream>
using namespace std;
int main(){
	double K, F, C;
	cin >> C;
	F = C * (9 / 5) + 32;
	K = C + 273.15;
	cout << "�����¶�: " << F << endl << "�����¶�: " << K << endl;
	system("pause");
}

