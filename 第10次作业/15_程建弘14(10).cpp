/*
(10)������Ϸ�� 21 ����Χ��һ��Ȧ���������Ϊ 1��21��
�ӵ� 1 �ſ�ʼ�� 1 ��ʼ���������� 5 �ı��������뿪��
һֱ����ȥֱ�����ֻʣ�� 1 �ˣ�������˵ı�š�
*/
#include<iostream>
using namespace std;
bool hashtable[21];
int main(){
	int pos=0,sum=0,num=21;
	while(num>=1){
		if(!hashtable[pos]){
			sum++;
			if(sum%5==0){
				hashtable[pos]=1;
				num--;	
			}	
		}
		pos=(pos+1)%21;
	}
	cout<<"���ʣ�±��Ϊ��"<<pos+1<<endl;
}

  
