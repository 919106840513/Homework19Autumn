#include<iostream>
using namespace std;
struct Fraction{
	int a,b;
};
void huajian(Fraction *p){
	if(p->a==0) p->b==1;
	if(p->a*p->b<0&&p->b<0){
		p->a=-p->a;
		p->b=-p->b;
	}
	if(p->a*p->b>0&&p->b<0){
		p->a=-p->a;
		p->b=-p->b;
	}
	for(int i=p->b;i>1;i--)
		if(p->a%i==0&&p->b%i==0)
		{
			p->a/=i;
			p->b/=i;
		}
}
void f(Fraction *px,Fraction *py){
	huajian(px);
	huajian(py);
	if(px->a*py->b==py->a*px->b)
		cout<<px->a<<'/'<<px->b<<'='<<py->a<<'/'<<py->b<<endl;
	if(px->a*py->b>py->a*px->b)
		cout<<px->a<<'/'<<px->b<<'>'<<py->a<<'/'<<py->b<<endl;
	if(px->a*py->b<py->a*px->b)
		cout<<px->a<<'/'<<px->b<<'<'<<py->a<<'/'<<py->b<<endl;
	Fraction z,*pz=&z;
	z.a=px->a*py->b+py->a*px->b;
	z.b=px->b*py->b;
	huajian(pz);
	cout<<"�ͣ�"<<pz->a<<'/'<<pz->b<<endl;
	z.a=px->a*py->b-py->a*px->b;
	z.b=px->b*py->b;
	huajian(pz);
	cout<<"�"<<pz->a<<'/'<<pz->b<<endl;
	z.a=px->a*py->a;
	z.b=px->b*py->b;
	huajian(pz);
	cout<<"����"<<pz->a<<'/'<<pz->b<<endl;
	z.a=px->a*py->b;
	z.b=px->b*py->a;
	huajian(pz);
	cout<<"�̣�"<<pz->a<<'/'<<pz->b<<endl;
}
int main()
{
	Fraction x,y,z,*px=&x,*py=&y;
	cout<<"�����һ�������ķ��ӷ�ĸ��";
	cin>>x.a>>x.b;
	cout<<"����ڶ��������ķ��ӷ�ĸ��";
	cin>>y.a>>y.b;
	f(px,py);
	return 0;
}
