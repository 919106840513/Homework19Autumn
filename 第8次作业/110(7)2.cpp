#include <iostream>
using namespace std;
int antitone(int n){
	if(n%10!=0)
	{
		cout<<n%10;
		return antitone(n/10);
	}
}
    
int main(){
	int n;
	cout<<"������һ��������";
	cin>>n;
    cout<<antitone(n);
    return 0;
}
