#include <iostream>
using namespace std;
unsigned f(unsigned a,unsigned b){
	unsigned c,d;
	if(a<b){
		c=a;a=b;b=c;
	}
	while(1){
	    d=a%b;
		if(d==0)
		break;
		a=b;b=d;
	}
	return b;
	}
unsigned h(unsigned a,unsigned b){
	return a*b/f(a,b);
}
int main(){
	unsigned a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	cout<<"�������Ϊ"<<f(a,b)<<endl;
	cout<<"��С������Ϊ"<<h(a,b)<<endl; 
}
	
