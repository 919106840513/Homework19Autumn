#include<iostream>
//֣�ĺƵĵڰ˴���ҵ  36_֣�ĺ� 918107820336 
using namespace std;
int Gys(int x, int y);              
int Gbs(int x,int y);
void QuFan1(int x);
void QuFan2(int x); 
int main() {
	int x, y;                                //P110 T6
	cin >> x >> y;
	cout << "��������������: " << x << "��" << y << endl;
	cout << "���Լ��Ϊ��" << Gys(x, y) << endl;
	cout << "��С������Ϊ��"<< Gbs(x,y) << endl;
	int z;                                           //T7
	cin >> z;
	cout << "��������������"<< z << endl;
	cout << "���ķ������Ϊ��";
	QuFan1(z);                             //����  
	cout <<endl; 
	QuFan2(z);                              //�ݹ� 
	
}
int Gys(int x, int y) {
	int n1, n2, temp;
	if (x > y) {
		n1 = x;
		n2 = y;
	}
	else {
		n1 = y;
		n2 = x;
	}
	while (n2 != 0) {
		temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	return n1;
}
int Gbs(int x,int y){
	return (x*y)/Gys(x,y);
}    
void QuFan1(int x){
	do{
		cout << x%10;
		x/=10;
	}while(x!=0);
}
void QuFan2(int x){
	if(x==0){
	}
	else{
		cout << x%10;
		return QuFan2(x/10);
	}
}
