#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"������һԪ���η��̵�����ϵ����"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	float i =b*b - 4*a*c;
	if(i<0){
		cout<<"�˷�����ʵ������";
	}
	else if(i==0){
		cout<<"�˷�����һʵ������x = "<<(-b/2/a);
	}
	else {
		float j = sqrt(i);
		cout<<"�˷�������ʵ������x1 = "<<((-b+j)/2/a);
		cout<<" x2 = "<<((-b-j)/2/a);
	}
	return 0;
	
}
