/*
(8)���һ�������� 3 ���ļ���ɣ�һ���ļ�main.cpp ����main ������
�� 2 ���ļ�max.cpp ����һ������max(int, int)��
�� 3 ���ļ� hex.cpp ����һ������ toHex(int x)���β� x ��ʾΪʮ�����ơ�
�������ļ���Ȼ ����һ�����ļ���Ŀ��������������������������ֵ����ʮ��������ʽ��ʾ�� 
��������ö��ļ���Ŀ����θ��ĳ���ʹ֮�ܹ������У�
*/ 
/*
(8)���һ�������� 3 ���ļ���ɣ�һ���ļ�main.cpp ����main ������
�� 2 ���ļ�max.cpp ����һ������max(int, int)��
�� 3 ���ļ� hex.cpp ����һ������ toHex(int x)���β� x ��ʾΪʮ�����ơ�
�������ļ���Ȼ ����һ�����ļ���Ŀ��������������������������ֵ����ʮ��������ʽ��ʾ�� 
��������ö��ļ���Ŀ����θ��ĳ���ʹ֮�ܹ������У�
*/ 
#include <iostream>
using namespace std;
//#include"max.cpp"
//#include"hex.cpp"
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
void toHex(int x){
	while(x!=0){
		int i=(x%16);
		if(i>=0&&i<10){
			cout<<i;
		}
		else{
			cout<<(char)('A'+i-10);
		}
		x/=16;
	}
}
int main() {
	cout<<"��������������"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"ʮ��������ʽ��ʾ�����ֵ"<<endl;
	toHex(max(x,y));
	return 0;
}

