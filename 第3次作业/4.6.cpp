#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    if(d<0) cout<<"��ʵ��";
    else if(d==0){
            cout<<"ֻ��һ����:x="<<x1;
        }
    else{
        cout<<"������ʵ��:x1="<<x1<<'\t'<<"x2="<<x2;
    }
    return 0;
}

