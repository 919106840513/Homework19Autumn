#include <iostream>
using namespace std;
int main(){
	int a,b,c=1,d,e,x,y;
	cout<<"������������������a,b��ֵ"<<endl;
	cin>>a>>b;
	x=a;
	y=b;
	if(a<b){
	c=a;a=b;b=c;
	}
	 while(c!=0){
	 c=a%b;
	 if(c==0)
	 break;
	 d=a/b;
	 if(d<b){
	a=b;b=d;}
	else
	b=d;
	 
	 }
	 cout<<"���Լ��Ϊ"<<b<<endl; 
	 e=x*y/b;
	 cout<<"��С������Ϊ"<<e<<endl;
}
