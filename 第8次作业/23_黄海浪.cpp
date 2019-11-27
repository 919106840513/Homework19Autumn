#include<iostream>
/*
*黄海浪 9181040G0818
*2019.10.31
*第 8 次作业
*/
using namespace std;

int dv(int a,int b){
    return a?dv(b%a,a):b;
}
int lm(int a,int b){
    return a*b/dv(a,b);
}
void printx(int n){
    if(n<10){
        cout<<n;
        return;
    }else{
        cout<<n%10;
        printx(n/10);
    }
}
int main(){
    {//T21.(6)
        int a,b;
        cin>>a>>b;
        cout<<"最大公约数: "<<dv(a, b)<<"最小公倍数: "<<lm(a, b)<<endl;
    }
    
    {//T21.(7)
        int n;
        cin>>n;
        //first
        printx(n);
        cout<<endl;
        //second
        while (n) {
            cout<<n%10;
            n/=10;
        }
    }
    return 0;
}
