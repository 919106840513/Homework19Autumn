/*

��Ŀ����ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ���
�������������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
1.�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k;
	cout.setf(ios::left);
	cout<<"water flower'number is:"<<endl;
	for(int n=100;n<1000;n++){
		i=n/100;
		j=n/10%10;
		k=n%10;
		if((i*100+j*10+k)==i*i*i+j*j*j+k*k*k){
			cout<<setw(5)<<n;
		}
	}
	cin.get();
	
}
