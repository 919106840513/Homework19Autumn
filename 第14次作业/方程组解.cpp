#include <iostream>
#include <math.h>
using namespace std;
struct jiexi{
	double det;
	double x1;
	double x2;
            };
jiexi f(int a,int b,int c){
	double s;
	 s=sqrt(b*b-4*a*c);
	 jiexi w;
	 w.det=s;
	 w.x1=(-b+s)/2*a;
	 w.x2=(-b+s)/2*a;
	 return w;
} 
int main (){
	int a,b,c;
	cin>>a>>b>>c;
	jiexi w;
	w=f(a,b,c);
	if(w.det<0)
	cout<<"�޽�"<<endl;
	else
	    if(w.det==0)
		cout<<"��Ψһ��"<<w.x1<<endl;
		else
		cout<<w.x1<<' '<<w.x2;
	return 0;
}
