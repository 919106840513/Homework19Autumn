#include<iostream>
using namespace std;

//(6)
int GCD(int m, int n)	//���Լ��
{
	if (n > m)
		swap(m, n);
	int temp = n;
	while (m % n != 0)
	{
		temp = m % n;
		m = n;
		n = temp;
	}
	return temp;
}
int LCM(int m, int n)	//��С������
{
	return m * n / GCD(m, n);
}
int main()	//����
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << "���Լ��:" << GCD(m, n) << endl;
		cout << "��С������:" << LCM(m, n) << endl << endl;
	}
	return 0;
}

//(7)����
int main()
{
	long n;
	while(cin >> n)
	{
		while (n != 0)
		{
			cout << n % 10;
			n /= 10;
		}
		cout << endl;
	}
	return 0;
}

//(7)�ݹ�
void reversal(long n)
{
	if (n != 0)
	{
		cout << n % 10;
		reversal(n / 10);
	}
	else
		cout << endl;
}
int main()
{
	long n;
	while (cin >> n)
		reversal(n);
	return 0;
}