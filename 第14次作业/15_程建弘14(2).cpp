/*
(2)��дһ���ṹ Point{int x,y}�� ��ʾƽ���ϵĵ㡣 �ڴ˻����ϱ�дһ������������������֮����롣��
���һ���ṹ�� �����㹹�������Σ����е��Ƿ񹹳�һ�������Σ� ��һ���������ܳ��������
*/ 
#include<iostream> 
#include<math.h>
using namespace std;
struct Point{
	int x1,y1,x2,y2;
	double dis;
};
struct Tri{
	int x1,y1,x2,y2,x3,y3;
	bool istri;
	double cir,area;
};
double figure(int x1,int y1,int x2,int y2){
	return sqrt((double)((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
bool ist(int a,int b,int c){
	if((a+b>c&&abs(a-b<c))||(a+c>b&&abs(a-c<b))||(c+b>a&&abs(b-a<a))){
		return true;
	}
	return false;
}
Point dis(){
	Point s;
	cout<<"��ֱ�����������x��y����"<<endl;
	cin>>s.x1>>s.y1>>s.x2>>s.y2; 
	s.dis=figure(s.x1,s.y1,s.x2,s.y2);
	return s;
}
Tri istriaa(){
	Tri t;
	cout<<"��ֱ�����������x��y����"<<endl;
	cin>>t.x1>>t.y1>>t.x2>>t.y2>>t.x3>>t.y3;
	double a=figure(t.x1,t.y1,t.x2,t.y2);
	double b=figure(t.x1,t.y1,t.x3,t.y3);
	double c=figure(t.x3,t.y3,t.x2,t.y2);
	t.istri=ist(a,b,c);
	t.cir=a+b+c;
	double p=0.5*(a+b+c);
    t.area=sqrt(p*(p-a)*(p-b)*(p-c));
	return t;
}
int main(){
	Point mm=dis();
	cout<<"������֮����룺"<<mm.dis<<endl;
	Tri nn=istriaa();
	if(nn.istri==0){
		cout<<"���ܹ���������"<<endl;
	}
	else{
		cout<<"�������ܳ� :"<<nn.cir<<" ��������� ��"<<nn.area<<endl;
	}
}
