/*
(1)��дһ�������� ���һԪ���η��� ax2+bx+c��Ҫ�����β�Ϊ f(int a,int b,int c)�� ���һ���ṹ��Ϊ��
�����������ͣ��ú������÷����Լ���Ҫ������������������������������
*/ 
#include<iostream> 
#include<math.h>
using namespace std;
struct result{
	float x1,x2;
	int type;
}; 
result f(int a,int b,int c){
	result m;
	if(b*b-4*a*c<0){
		m.type=1;
	}
	else if(b*b-4*a*c==0){
		m.type=2;
	}
	else{
		m.type=3;
	}
	double delta;
	delta=sqrt((double)b*b-4*a*c);
	m.x1=(0.5/a)*(-b+delta);
	m.x2=(0.5/a)*(-b-delta);
	return m;
}
int main(){
	cout<<"���һԪ���η��� ax2+bx+c,������a,b,c"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	result s=f(a,b,c);
	if(s.type==1){
		cout<<"������ʵ����"<<endl; 
	}
	else if(s.type==2){
		cout<<"x1=x2= "<<s.x1<<endl; 
	}
	else{
		cout<<"x1="<<s.x1<<"  x2="<<s.x2<<endl; 
	}
}
