#include<iostream>
using namespace std;

bool isSmith(int n){
	int num1=0,num2=0,n1=n;
	while(n!=0){
		num1+=n%10;
		n/=10;
	}
	int x=0;
	for(int i=2;i*i<=n1;i++){
		while(n1!=i){
			if(n1%i==0){
				x=i;		//�ֽ�������������� x 
				while(x!=0){
					num2+=x%10;	
					x/=10;
				}
				n1/=i;
			}
			else break;
		}
	}
	x=n1;
	while(x!=0){
		num2+=x%10;
		x/=10;
	}
    return num1==num2;
}


int main(){
	int n;
	cout<<"�����������n(n=0����):" ;
	while(cin>>n&&n!=0){	 
		cout<<isSmith(n)<<endl;
		cout<<"�����������n(n=0����):" ;
	}
	int x=4937774;
	while(x++){
		if(isSmith(x)){
		cout<<"4937774��һ��Smith���ǣ�"<<x<<endl;
		break;	
		}	
	}
	return 0;
}
