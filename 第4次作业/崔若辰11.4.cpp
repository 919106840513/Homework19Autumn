#include<iostream>
using namespace std;

int main() 
{
	int sum=0;
	char ch;
	while(ch=cin.get()) {
		if(ch=='\n'){
		    break;
		} 
        else if(ch>='0'&&ch<='9'){
	        sum++;
    } 
  }
  cout<<"���������ַ��ĸ���Ϊ�� "<<sum;
  return 0;
}
