//(5)
#include<iostream>
using namespace std;

bool isSmith(int n){
	int num1=0,num2=0,n1=n;// 	����һ��n1=n 
	while(n!=0){
		num1+=n%10;//num1Ϊ��λ��֮�� 
		n/=10;
	}
//	cout<<num1<<endl;
	
	int x=0;
	for(int i=2;i*i<=n1;i++){
		while(n1!=i){
			if(n1%i==0){
				x=i;		//�ѷֽ�������������� x 
				while(x!=0){
					num2+=x%10;		//�� x��λ����� 
					x/=10;
				}
				n1/=i;
			}
			else break;
		}
	}
	x=n1;		//���һ��������������ͬ�������λ��֮�� 
	while(x!=0){
		num2+=x%10;
		x/=10;
	}

    //cout<<num2<<endl; 
    return num1==num2;
}

//���� 
int main(){
	int n;
	cout<<"�����������n(n=0����):" ;
	while(cin>>n&&n!=0){		//����0���� 
		cout<<isSmith(n)<<endl;
		cout<<"�����������n(n=0����):" ;
	}
//4937774 
	int x=4937774;
	while(x++){
		if(isSmith(x)){
		cout<<"4937774��һ��Smith���ǣ�"<<x<<endl;
		break;	
		}	
	}
	return 0;
}
