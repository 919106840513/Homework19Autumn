#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool flowerNum(int n)	//�ж��Ƿ�Ϊˮ�ɻ���
{
	int sum = 0, n_copy = n;
	for (int i = 1; i <= 3; i++)
	{
		sum += (int)pow(n_copy % 10, 3);
		n_copy /= 10;
	}
	if (sum == n)
		return true;
	return false;
}

bool palinNum(long n)	//�ж��Ƿ�Ϊ������
{

	long n_copy1 = n, n_copy2 = n, n1 = 0;
	int digit = 0;
	while (n_copy1 != 0)
	{
		digit++;
		n_copy1 /= 10;
	}
	while (n_copy2 != 0)
	{
		n1 += (n_copy2 % 10) * (long)pow(10, digit - 1);
		n_copy2 /= 10;
		digit--;
	}
	if (n1 == n)
		return true;
	return false;
}

bool perfectNum(int n)	//�ж��Ƿ�Ϊ��ȫ��
{
	int sum = 1;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n && n != 1)
		return true;
	return false;
}

int main()
{
	//��1��
	int i, j;
	cin >> i >> j;
	for (int n = i; n <= j; n++)
	{
		if (flowerNum(n))
			cout << n << "  ";
	}
	cout << endl;

	//��2��
	long n;
	cin >> n;
	if (palinNum(n))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
	//��3��
	int i1, j1;
	cin >> i1 >> j1;
	for (int n = i1; n <= j1; n++)
	{
		if (perfectNum(n))
			cout << n << "  ";
	}
	cout << endl;

	return 0;
}
