��1��
#include<iostream>
#include<string.h>
using namespace std;
int main(void){
	int max, len, n = 0;
	char(*ch)[20] = new char[max][20];
	int* count = new int[max];
	cin >> max;
	cin.get();
	for (int i = 0; i < max; i++){
		cin.getline(ch[i], 20);
		len = strlen(ch[i]);
		for (int j = 0; j < len - 1; j++){
			for (int k = j + 1; k < len; k++){
				if (ch[i][j] > ch[i][k])
					n++;
			}
		}
		count[i] = n;
		n = 0;
	}
	char a[20];
	int b;
	for (int i = 0; i < max - 1; i++){
		for (int j = 0; j < max - 1 - i; j++){
			if (count[j] > count[j + 1]){
				strcpy(a, ch[j]);
				strcpy(ch[j], ch[j + 1]);
				strcpy(ch[j + 1], a);
				b = count[j];
				count[j] = count[j + 1];
				count[j + 1] = b;
			}
		}
	}
	for (int i = 0; i < max; i++)
		cout << ch[i] << "  " << count[i] << endl;
	delete[]ch;
	delete[]count;
	return 0;
}
��2��
#include<iostream>
#include<string.h>
using namespace std;
struct ch{
	int len = 0;
	char* p = NULL;
};
int main(void){
	int n;
	cin >> n;
	cin.get();
	ch* chs = new ch[n];
	for (int i = 0; i < n; i++){
		cout << "�̨�" << i + 1 << "??" << endl;
		cin >> chs[i].len;
		cin.get();
		chs[i].p = new char[chs[i].len + 1];
		for (int y = 0; y < chs[i].len; y++){
			char a;
			cin >> a;
			*(chs[i].p + y) = a;
		}
		*(chs[i].p + chs[i].len) = 0;
	}
	ch temp;
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1 - i; j++)		{
			if (strcmp(chs[j].p, chs[j + 1].p) > 0){
				temp = chs[j];
				chs[j] = chs[j + 1];
				chs[j + 1] = temp;
			}
		}
	}
	cout << endl << "sort:" << endl;
	for (int i = 0; i < n; i++)	{
		cout << chs[i].p << endl;
	}
	return 0;
}