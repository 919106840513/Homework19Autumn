//(3)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j;
	cout<<"Input i & j:"<<endl;
	while(cin>>i>>j){
		if(i>j) swap(i, j);//���� 
		for(i;i<=j;i++){
			int sum=0;
			for(int k=1;k<i;k++)
				if(i%k==0) sum+=k;//������� 
			if(sum==i) 
				cout<<sum<<endl;//�ж���ȫ 
		}
	}
	return 0;
}

