/*
��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%�������
��������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
��������7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
������40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������
1.����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ�����ɳ����͡�������
*/



#include<iostream> 
using namespace std;
int sum[10]={100000,200000,400000,600000,1000000};
int main()
{
	cout<<"������Ҫ����Ľ��"<<endl;
	long int i;
	int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	cin>>i;
	bonus1=100000*0.1;
	bonus2=bonus1+100000*0.75;
	bonus4=bonus2+200000*0.5;
	bonus6=bonus4+200000*0.3;
	bonus10=bonus6+400000*0.15;
	int cas;
	for(int k=0;k<10;k++){
		if(i<=sum[k]){
			cas=k;
			break;
		}
	}
 
	switch(cas){
		case 0:	bonus=i*0.1;
		break;
		case 1: bonus=bonus1+(i-100000)*0.075;
		break;
		case 2: bonus=bonus2+(i-200000)*0.05;
		break;
		case 3: bonus=bonus4+(i-400000)*0.03;
		break;
		case 4:bonus=bonus6+(i-600000)*0.015;
		break;
		case 5:bonus=bonus10+(i-1000000)*0.01;
		break;
		default:cout<<"�������"<<endl; 
		break;	
	} 
	cout<<"bonus="<<bonus;
}
