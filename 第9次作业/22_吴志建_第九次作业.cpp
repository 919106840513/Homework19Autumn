#include<iostream>
#include<cmath>
using namespace std;

//��
#define AREA(s,a,b,c) sqrt((s) * (a) * (b) * (c))
int main()
{
	double s, a, b, c;
	while (cin >> a >> b >> c)
	{
		s = (a + b + c) / 2;
		cout << "��� = " << AREA(s, (s - a), (s - b), (s - c)) << endl << endl;
	}
	return 0;
}

//����
double getArea(double a, double b, double c)
{
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		cout << "��� = " << getArea(a, b, c) << endl << endl;
	}
	return 0;
}
