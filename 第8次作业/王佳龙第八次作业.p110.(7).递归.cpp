#include <iostream>
using namespace std;
unsigned f(unsigned a){
    cout<<a%10;
	if(a/10!=0)
	f(a/10);
}
int main(){
	unsigned a;
	cout<<"����һ������"<<endl;
	cin>>a;
	f(a);
}
