#include<iostream>
using namespace std;
int main(){
	int start,end,i,j,sum;//jΪ���� 
	cin>>start>>end;
	for(i=start;i<=end;++i){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)	sum+=j;
		}
		if(sum==i)	cout<<endl<<i<<"����ȫ��";
	}
	return 0;
}
