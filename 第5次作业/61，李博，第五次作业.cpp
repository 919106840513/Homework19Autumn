(2)
#include<iostream> 
using namespace std;
int main(){
	 int i;
	 int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	 cin>>i; 
	 bonus1=100000*0.1;
	 bonus2=bonus1+100000*0.075;
	 bonus4=bonus2+200000*0.05;
	 bonus6=bonus4+200000*0.03;
	 bonus10=bonus6+400000*0.015;
	 if(i<=100000)
	 bonus=i*0.1;
	 else if(i<=200000)
	 bonus=bonus1+(i-100000)*0.075;
	 else if(i<=400000)
	 bonus=bonus2+(i-200000)*0.05;
	 else if(i<=600000)
	 bonus=bonus4+(i-400000)*0.03;
	 else if(i<=1000000)
	 bonus=bonus6+(i-600000)*0.015;
	 else
	 bonus=bonus10+(i-1000000)*0.01;
	 cout<<"bonus is "<<bonus<<endl;
}

(4)
#include<iostream>
using namespace std;
int main(){
	int year,month,day;
	int sum;
		cout<<"请输入年月日 ";
		cin>>year>>month>>day;
		bool run=(year%4==0&&year%100!=0)||year%400==0;
		switch(month){
		    case 1:sum=0;break;
		    case 2:sum=31;break;
		    case 3:sum=59;break;
		    case 4:sum=90;break;
		    case 5:sum=120;break;
		    case 6:sum=151;break;
		    case 7:sum=181;break;
		    case 8:sum=212;break;
		    case 9:sum=243;break;
		    case 10:sum=273;break;
		    case 11:sum=304;break;
		    case 12:sum=334;break;
		    default:cout<<"input data error! ";;break;
		}
	if(run&&month>2)
	sum=sum+1+day;
	else
	sum=sum+day;
	cout<<"这是"<<year<<"年的第"<<sum<<"天" <<endl;
}

(6）
#include<iostream>
using namespace std;
int main(){
	cout<<     "       ********"<<endl;
	cout<<     "       *      *"<<endl;
	cout<<     "       *"<<endl;
	cout<<     "       *"<<endl;
	cout<<     "       *      *"<<endl;
	cout<<     "       ********"<<endl;
}

(8)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<"x"<<j<<"="<<setw(2)<<i*j<<"  " ;
		}
		cout<<endl;
	}
} 

(10)
#include<iostream>
using namespace std;
int main(){
	cout<<"**"<<endl;
	for(int i=1;i<21;i++){
		for(int j=0;j<i;j++){
			cout<<"*"; 
		}
		cout<<endl;
	} 
}