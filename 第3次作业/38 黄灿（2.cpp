#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c,d,x;
	cout<<"������ϵ������a,b,c :"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0){
		cout<<"�����޸�"<<endl; 
	}
	else if(d==0){
		cout<<"������һ������";
		x=-b/(2*a);
		cout<<x<<endl; 
	}
	else{
		cout<<"��������������";
		x=(-b+sqrt(d))/(2*a);
		cout<<x<<'\t';
		x=(-b-sqrt(d))/(2*a);
		cout<<x<<endl;		 
	}
	return 0;
}
