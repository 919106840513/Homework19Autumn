#include<iostream>
#include<math.h>
using namespace std;

/*
 *�ƺ��� 9181040G0818
 *2019.10.09
 *�� 3 ����ҵ 
 */
 
int main(){
    {//T11.(1)
        int a;
        cin>>a;
        //cout<< bitset<sizeof(int)*8>(a) <<endl;
        for(int i=sizeof(int)*8-1;i>=0;--i)
            cout<<((a>>i)&1);
        cout<<endl;
    }
    {//T11.(6)
        double a,b,c;
        cin>>a>>b>>c;
        double derta = b*b-4*a*c;
        if(derta < 0){
            cout<<"û�и�";
        }else if(derta == 0){
        	cout<<"��һ���� Ϊ��\t";
        	cout<<-b/2/a<<endl;
        }else{
        	cout<<"�������� Ϊ��\t";
        	cout<<(-b-sqrt(derta))/2/a<<"\t"<<(-b+sqrt(derta))/2/a<<endl;
		}
    }
    return 0;
}

