//(10)
#include<iostream>
using namespace std;

int getNum(int a[]){
	int x=0;
	for(int i=0;i<21;i++){
		if(a[i]==1) x++;
	}
	return x;	//���������������1������ 
}
int main(){
	int a[21];
	for(int i=0;i<21;i++){
		a[i]=1;		//21��ȫ����ֵ 1 
	}
	int x=0;
	while(getNum(a)!=1){		//ѭ������Ϊ�����������1��ֻ��һ�� 
		for(int i=0;i<21;i++){
			if(a[i]==1) x++;		//����1ʱ��x���� 
			if(x==5){		//��x==5ʱ�������ֵΪ0������x�ٹ��� 
				a[i]=0;
				x=0;
			} 
		}
	}
	int y=0; 
	for(int i=0;i<21;i++){
		if(a[i]==1){
			y=i;		//�����һ��Ǳ긳�� y 
			break;
		}
	}
	cout<<"ʣ���һ���˵ı��Ϊ:"<<y+1<<endl;		//+1 
	

}
