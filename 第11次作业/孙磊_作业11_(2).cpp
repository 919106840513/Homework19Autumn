//(2)
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Input a number:"<<endl;
	while(cin>>num){
		int m=num,numHui=0;
		while(m!=0){
			numHui=numHui*10+m%10;//��ԭ���ߵ�˳�� 
			m/=10;
		}
		if(numHui == num)
			cout<<num<<"�ǻ�������"<<endl;
		else
			cout<<num<<"���ǻ�������"<<endl;
	} 	
	
}

