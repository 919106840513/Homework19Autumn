2.

#include <iostream>
using namespace std;
int main(){
	int bonus=0,price=0;
	cout<<"Please enter bonus:";
	cin>>bonus;
	if(bonus<0){
		cout<<bonus<<"is invalid.>0 is valid!"<<endl;
		return 0;
	}
	switch(bonus/100000){
		case 0:cout<<"price="<<bonus*0.1;
		       break;
	    case 1:cout<<"price="<<(bonus-100000)*0.075+10000;
	           break;
	    case 2:
		case 3:cout<<"price="<<(bonus-200000)*0.05+10000+7500;
		       break;
		case 4:
		case 5:cout<<"price="<<(bonus-400000)*0.03+10000+7500+10000;
		       break;
		case 6:
	    case 7:
	    case 8:
	    case 9:cout<<"price="<<(bonus-600000)*0.015+10000+7500+10000+6000;
	           break;
	    default:cout<<"price="<<(bonus-1000000)*0.01+10000+7500+10000+6000+6000;
	    
	}
	return 0;
}


13.
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"'Water flower'number is:";
	for(n=100;n<1000;n++)
	{
		i=n/100;/*�ֽ����λ*/
		j=n/10%10;/*�ֽ��ʮλ*/
		k=n%10;/*�ֽ����λ*/
		if(n==i*i*i+j*j*j+k*k*k)
		cout<<setfill(' ')<<setw(5)<<n;
	}
	cin.get();
	return 0;
}

16.

#include<iostream>
using namespace std;
int main()
{
 int a,b,num1,num2,temp;
 cout<<"please input two numbers:\n";
 cin>>num1>>num2;
 if(num1<num2)/*������������ʹ��������num1��*/
 {
 temp=num1;
 num1=num2;
 num2=temp;
 }
 a=num1;b=num2;
 while(b!=0)/*����շ������ֱ��bΪ0Ϊֹ*/
 {
 temp=a%b;
 a=b;
 b=temp;
 }
 cout<<"gongyueshu:"<<a<<'\n';
 cout<<"gongbeishu:"<<num1*num2/a<<endl;
 return 0;
}

23.
#include<iostream>
using namespace std;
int main(){
	cout<<"������ױ߳��Ⱥ͸߶�"<<endl; 
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b/2;i++){
		for(int j=b/2-i;j<b/2;j++){
			cout<<" ";
		}
		for(int k=0;k<a;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=b/2-1;i>=0;i--){
		for(int j=i;j>0;j--){
			cout<<" ";
		}
		for(int k=0;k<a;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}

