#include<iostream>
#include<math.h>

using namespace std;

int main(void){
	int x;
	cout<<"������������x:";
	cin>>x;
	cout<<"x��������:";
	for(int i =1;i<=x;i++){
		if(x%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl<<endl;;
	
	cout<<"1~100����ȫ����:";
	for(int i=1;i<=100;i++){
	    int sum = 0;
	    
		for(int j=1;j<=i;j++){
			if(i%j==0&&i!=j){
				sum += j;
			}
		}
		if(sum == i){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
