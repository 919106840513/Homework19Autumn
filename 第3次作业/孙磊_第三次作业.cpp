//��������ҵ	ʱ�䣺2019.10.8 
#include<iostream>
#include<math.h>
using namespace std;
//(1)
int bin(int n){
	if(n==1) {
		cout<<n;
		return 0;//���nΪ 1ֱ�ӷ��� 
	}
	else{

		bin(n/2);//�����ĵݹ���� ���ȵ��ã������ 
		cout<<n%2;// �ɺ���ǰ��� 
	}
	return 0;
}

int main()
{
	cout<<"��(1)��"<<endl;
	int num;
	cout<<"������Ҫת����ʮ��������";
	cin>>num;
	cout<<"ת��Ϊ�����Ƶã�"; 
	bin(num);//���ú��� 
	cout<<endl; 
	
	
//(6) 
	cout<<"��(6)��"<<endl;
	cout<<"�������뷽��ϵ��a,b,c���ո������" ; 
	int a,b,c,temp;
	cin>>a>>b>>c;
	int x1,x2;
	temp=b*b-4*a*c;//�б�ʽ 
	if(temp>0){
		x1=(sqrt(temp)-b)/(2*a);//sqrt()ƽ������������ͷ�ļ� #include<math.h) 
		x2=(-sqrt(temp)-b)/(2*a);
		cout<<"������ʵ���ֱ�Ϊ��"<<x1<<' '<<x2<<endl;
	}
	else if(temp==0){
		x1=(sqrt(temp)-b)/(2*a);
		cout<<"��һ��ʵ����"<<x1<<endl;
	}
	else{
		cout<<"��ʵ����"<<endl; 
	}
	return 0; 
} 





//(6)






 
