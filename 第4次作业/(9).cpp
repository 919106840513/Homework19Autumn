//���Ĵ���ҵ 2019.10.11
//(7) 
#include<iostream>
#include<math.h> 
using namespace std;
int main()
{		
		cout<<"����һ����������";
		int n;
		cin>>n;
		if(n<=0)
		cout<<"���������������"<<endl ;
		else{
			cout<<n<<"�������У�";
			for(int i=1;i<n;i++){
				if(n%i==0)//�������ľ������� 
				cout<<i<<' ';
			}
		}	
		cout<<endl;
		cout<<"1��100����ȫ���У�";
		for(int k=1;k<=100;k++){//1��100ÿһ�����ó��� 
			int count=0;
			for(int j=1;j<k;j++){
				if(k%j==0)//��ǰ��һ�� 
				count=j+count;
			}
			if(k == count)//�ж���ȫ�� 
			cout<<count<<' '; 
		}	
}
