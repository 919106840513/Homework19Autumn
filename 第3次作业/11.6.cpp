#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c; cin>>a>>b>>c;
	double deta=b*b-4*a*c;
	if(deta<0) cout<<"�޸�";
	else if(deta==0) cout<<"��һ��Ϊ"<<-b/2*a;
	else cout<<"������Ϊ"<<(-b+sqrt(deta))/2*a<<"��"<<(-b-sqrt(deta))/2*a; 
	return 0;
}
