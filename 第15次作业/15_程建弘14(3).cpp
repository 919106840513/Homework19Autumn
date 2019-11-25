/*
(3)��дһ���ṹ Fraction{int a,b}����ʾ������ ���з���Ϊ a�� ��ĸΪ b�� Ϊ�򻯼��㣬Լ����ĸΪ����
��������Ϊ���������һ������Ӧ������ӷ�ĸ��ͬʱԼ���� ����Ϊ 0 ʱ����ĸΪ 1�� ��ʾֵΪ 0 �ķ�����
��дһ�麯�����Ա������ ���������������еȣ��Ƚϴ�С���ܼ���͡� � ���� �̡�
*/
#include<iostream>
#include<math.h> 
using namespace std;
struct Fraction{
	int a,b;
};
int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
void yuefen(Fraction* re){
	if(re->b<0){
		re->a=-re->a;
		re->b=-re->b;
	}
	if(re->a==0){
		re->b=1;
	}
	else{
		int c=gcd(abs(re->a),abs(re->b));
		re->a/=c;
		re->b/=c;
	}
}
Fraction add(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b+f1->b*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction minu(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b-f1->b*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction multy(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->a;
	re.b=f1->b*f2->b;
	yuefen(&re);
	return re;
}
Fraction div(Fraction* f1,Fraction* f2){
	Fraction re;
	re.a=f1->a*f2->b;
	re.b=f1->b*f2->a;
	yuefen(&re);
	return re;
}
bool equal(Fraction* f1,Fraction* f2){
	Fraction ans=minu(f1,f2);
	if(ans.a==0){
		return true;
	}
	return false;
}
bool big(Fraction* f1,Fraction* f2){
	Fraction ans=minu(f1,f2);
	if(ans.a>0){
		return true;
	}
	return false;
}
void show(Fraction* r){
	yuefen(r);
	if(r->b==1){
		cout<<r->a<<endl;
	}
	else if(abs(r->a)>r->b){
		cout<<r->a/r->b<<" "<<abs(r->a)/r->b<<"/"<<r->b<<endl;
	}
	else{
		cout<<r->a<<"/"<<r->b<<endl;
	}
}
int main(){
	Fraction t1={3,2};
	Fraction*tt1=&t1;
	Fraction t2={5,7};
	Fraction*tt2=&t2;
	//////////��ʾ//////////////
	show(tt1);
	//////////�Ƚ�//////////////
	if(equal(tt1,tt2)){
		cout<<"�������"<<endl;
	}
	else if(big(tt1,tt2)){
		show(tt1);cout<<"����"<<endl;
	}
	else{
		show(tt2);cout<<"����"<<endl;
	}
	//////////�͡� � ���� ��//////////////	
	Fraction ans=multy(tt1,tt2);
	cout<<"�����˻�:"<<endl;
	show(&ans);
} 
