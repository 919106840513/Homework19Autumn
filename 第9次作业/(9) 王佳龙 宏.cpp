#include <iostream>
#include <math.h>
#define s (a+b+c)/2
using namespace std;
int main(){
    int area,a,b,c,d;
	cout<<"�ֱ�����a,b,c��ֵ"<<endl;
	cin>>a>>b>>c;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"���Ϊ"<<area<<endl; 
}
 
