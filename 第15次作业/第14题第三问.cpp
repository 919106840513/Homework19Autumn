#include<iostream>
using namespace std;
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
struct Fraction{
	int a,b;
};
Fraction f(Fraction x){
	int k;Fraction c,d,e;e.a=0;e.b=1;
	if (x.a==0) return e;
	d.a=x.a;d.b=x.b;
	for (;max(x.a,x.b)%min(x.a,x.b)!=0;max(x.a,x.b)%min(x.a,x.b)){
		k=max(x.a,x.b)%min(x.a,x.b);
		max(x.a,x.b)=min(x.a,x.b);
		min(x.a,x.b)=k;
	}
	c.a=(d.a)/min(x.a,x.b);
	c.b=(d.b)/min(x.a,x.b);
return c;
}
void Comcal(Fraction x,Fraction y){
Fraction p,q,r,s,t,w;
p.b=x.b*y.b;p.a=x.a*y.b;
q.b=x.b*y.b;q.a=y.a*x.b;
if (p.a==q.a)
cout<<"һ����"<<endl; 
else p.a>q.a?cout<<"ǰ�ߴ�"<<endl:cout<<"���ߴ�"<<endl;
r.a=p.a+q.a;r.b=p.b;cout<<"��Ϊ"<< f(r).a<<" "<<f(r).b<<endl;
s.a=p.a-q.a;s.b=p.b;cout<<"��Ϊ"<< f(s).a<<" "<<f(s).b<<endl;
t.a=x.a*y.a;t.b=x.b*y.b;cout<<"��Ϊ"<< f(t).a<<" "<<f(t).b<<endl;
w.a=x.a*y.b;w.b=x.b*y.a;cout<<"��Ϊ"<< f(w).a<<" "<<f(w).b<<endl;
}
int main(){
	Fraction x;Fraction y;
	cin>>x.a>>x.b;cin>>y.a>>y.b;
	if (x.b<=0||y.b<=0)
	cout<<"����Υ��Լ��";
	else Comcal (x,y);
}
