#include<iostream>
using namespace std;
int main(){
	int n,m,result=0; 
    cout<<"������������";
	cin>>n;
	cout<<endl<<"������Ϸ������:"; 
	cin>>m;
	for(int i=2;i<=n;i++)
	result=(result+m)%i;
    cout<<"���һ���˱��Ϊ"<<result+1<<endl;
}

