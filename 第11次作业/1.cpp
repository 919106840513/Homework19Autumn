#include<iostream>
using namespace std; 

int main(){
    int i,j;
    int a,b,k;
    cin>>i>>j;
    cout<<"'water flower'number is:"<<endl;
	for(int n=i+1;i<j;n++){
        a=n/100;/*�ֽ����λ*/
        b=n/10%10;/*�ֽ��ʮλ*/
        k=n%10;/*�ֽ����λ*/
        if(a*100+b*10+k==a*a*a+b*b*b+k*k*k)
            cout<<n<<endl;
        else
            continue;
    }
    return 0;
}

