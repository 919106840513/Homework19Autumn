#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;	//输入字符串
	char num[100];	//记录数字字符
	int num_index = 0;	//num数组下标
	int b[100], sum = 0;	//数组b用来存放整数，sum用于将数字字符转化为整数时
	int b_index = 0;	//b数组下标
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		num_index = 0;
		while (s[i] >= '0' && s[i] <= '9')
		{
			num[num_index] = s[i];
			i++;
			num_index++;
		}
		if (num_index != 0)
		{
			for (int k = 0; k < num_index; k++)
				sum += (num[k] - '0') * (int)pow(10, num_index - k - 1);
			b[b_index] = sum;
			b_index++;
		}
		sum = 0;
	}
	cout << endl << "共有 " << b_index << " 个整数" << endl << endl;
	for (int k = 0; k < b_index; k++)
		cout << b[k] << endl;
	return 0;
}