11.3
#include<iostream>
using namespace std;
int main()
{
	int sum_32 = 1,n = 1,summ = 1;
	long long sum_64 = 1,summm = 1;
	for(;(sum_32 / n) == summ;)
	{
		n++;
		summ = sum_32;
		sum_32 *= n;
	}
	cout << n - 1<<endl;
	for(n = 1;(sum_64 / n) == summm;)
	{
		n++;
		summm = sum_64;
		sum_64 *= n;
	}
	cout << n - 1;
}
(7)
#include<iostream>
using namespace std;
int main()
{
	int fenzi = 2,fenmu;
	cout << "1/2 "<<"3/2 ";
	for(int i = 3;i <= 20;i++)
	{
		fenmu = fenzi;
		fenzi += i;
		cout << fenzi << '/' << fenmu <<' ';
		if(i % 7 == 0)
		cout << endl;
	}
}
(8)
#include<iostream>
using namespace std;
int main()
{
	int a,sum = 1;
	
	cin >> a;
	for(int h = 1;h * h < a;h++)
	if(a % h == 0)
	cout << h << ' ' << a / h << ' ';
	cout << endl;
	for(int n = 2;n <= 100;n++,sum = 1)
	{
		for(int h = 2;h * h < n;h++)
		if(n % h == 0)
		sum += ( h + n / h);
		if(sum == n)
		cout << sum <<' ';
	}
	return 0;
}