#include<iostream>
using namespace std;
void T(int a,int b){
	for(int i=a;i<=b;i++){
		if((i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)
		+(i%10)*(i%10)*(i%10)==i){
			cout<<i<<" ";
		}
	}
}
int main(){
	int i,j;
	cout<<"���������������������֮���ˮ�ɻ�����"<<endl;
	cin>>i>>j;
	cout<<"ˮ�ɻ���Ϊ�� "<<endl; 
	T(i,j);
	
} 
