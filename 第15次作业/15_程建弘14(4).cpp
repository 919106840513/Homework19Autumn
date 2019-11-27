/*
(4)����һ���ṹ���� Course ��ʾ�γ̣������γ̱�š��γ����ơ����˷�ʽ������һ��ö�����ͱ�ʾ
���ֿ��˷�ʽ��һ���ǰٷ��ƣ�һ���ǵȼ��ƣ��� A�� B�� C�� D�� E�� һ�ſγ�ֻ��ѡ��һ�ֿ��˷�ʽ����
��һ���ṹ���ͣ���ʾѧ���ɼ�������ѧ�š��������γ̱�š����˳ɼ���ע�⣬���˳ɼ�������Ӧ����һ
�������壬����һ��ֵҪô��һ���ٷ��Ƴɼ���Ҫô��һ���ȼ��ɼ���Ҫ���ݸÿγ̵Ŀ��˷�ʽ������
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct Course{
	char id[10];
	char coursename[20];
	char tool;
};
enum kinds{baifenzhi,dengjizhi};
enum dengji{A=1,B,C,D,E};
union Grade{
	float sd;
	dengji sg;
};
struct student{
	char id[10];
	char name[10];
	char coursename[20];
	kinds kind;
	Grade level;
};
void printlevel(kinds kind,Grade level){
	if(kind==baifenzhi){
		cout<<setw(5)<<level.sd;
	}
	else{
		cout<<setw(5);
		switch(level.sg){
			case 1:cout<<"A";break;
			case 2:cout<<"B";break;
			case 3:cout<<"C";break;
			case 4:cout<<"D";break;
			case 5:cout<<"E";break;			
		};
	}
}
void printstudent(student st[],int n){
	cout<<setw(5)<<"ѧ��"<<setw(10)<<"ѧ������"<<setw(20)<<"�γ̱��"<<setw(5)<<"���˳ɼ�"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(5)<<st[i].id<<setw(10)<<st[i].name<<setw(20)<<st[i].coursename;
		printlevel(st[i].kind,st[i].level);
		cout<<endl;		
	}
}
int main(){
	
	Course cos[10]={{"001","aaa",'1'},
				  	{"002","bbb",'1'},			
				  	{"003","ccc",'0'},		
				  	{"004","ddd",'1'}};	  
	student st[]={{"001","amy","001",dengjizhi},
				  {"002","bob","001",dengjizhi},			
				  {"003","candy","003",baifenzhi},		
				  {"004","david","003",baifenzhi}};
	st[0].level.sg=A;
	st[1].level.sg=B;
	st[2].level.sd=98;
	st[3].level.sd=92;
	printstudent(st,4);
} 
