#include<iostream>
#include<string>
using namespace std;

//(4)
int main()
{
	string s;
	while (getline(cin, s))
	{
		int n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				n++;
		}
		cout << "��" << n << "������" << endl;
	}
	return 0;
}

//(7)
int main()
{
	int a = 3, b = 2, c = 0;
	cout << "��1�" << "1/2" << endl;
	cout << "��2�" << "3/2" << endl;
	for (int i = 3; i <= 20; i++)
	{
		c = a;
		a = a + b;
		b = c;
		cout << "��" << i << "�" << a << "/" << b << endl;
	}
	return 0;
}

//(8)
int main()
{
	int x;
	cin >> x;
	cout << x << "������Ϊ:" << 1 << " ";
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
			cout << i << " ";
	}
	cout << endl << "1~100����ȫ��Ϊ:";
	for (int y = 2; y <= 100; y++)
	{
		int sum = 1;
		for (int i = 2; i <= y / 2; i++)
		{
			if (y % i == 0)
				sum += i;
		}
		if (sum == y)
			cout << y << " ";
	}
	return 0;
}