using namespace std;
#include <iostream>
#include <iomanip> 
main(){
	char a[100],*q=a;
	int b[100],*p=b,sum=0;
	gets(a);
	for(;*q!='\0';q++)
	  if(*q>='0'&&*q<='9'){
	  	   *p=*q-'0';
	  	    q++;
	  	   while(*q>='0'&&*q<='9')
	  	   	   *p=(*p)*10+(*q++)-'0';
	  	   	   sum+=1;
	  	   	   p+=1;
	  }
	  cout<<"��������:"<<endl;
	  for(int i=0,*p=b;i<sum;i++,p++) cout<<*p<<setw(10);
	  cout<<endl<<"������ĸ�����:"<<sum<<endl;
}
