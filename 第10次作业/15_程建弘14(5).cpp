 /*
 (5)��дһ�������� bool isSmith(int n)�� �ж�һ�������� n �Ƿ�Ϊ Smith ����
Smith ���ĸ��һ�������������λ��֮�͵����������������ĸ�λ��֮�͡�
���磺
4 = 2 * 2�� 4 = 2 + 2������ 4 ����һ�� Smith ����
22 = 2 * 11�� 2 + 2 = 2 + 1 + 1�� 22 Ҳ��һ�� Smith ����
27 = 3 * 3 * 3�� 2 + 7 = 3 + 3 + 3�� 27 Ҳ��һ�� Smith ����
���Լ�����ڵ��� 4937774 ����һ�� Smith ��
*/ 

//----------------------------------------- 
//���ڵ��� 4937774 ����һ�� Smith �������� 
//4937775 
//----------------------------------------- 
#include<iostream>
#include<math.h>
using namespace std;

int cal(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
bool isSmith(int n){
	int sum1=cal(n);
	
	int sum2=0,temp=n;
	while(temp!=1){
		for(int i=2;i<n;i++){
			if(temp%i==0){
				sum2+=cal(i);
				temp=temp/i;
				break;
			}
		}		
	}
	if(sum1==sum2){
		return true;
	}
	return false;
}
bool isPrime(int n)
{
	if(n<=1)return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++)
		if(n%i==0)return false;
	return true;
}
int main(){
	//cout<<"������һ������������������֮���Smith ��"<<endl; 
	//cin>>top;
	cout<<"���ڵ��� 4937774 ����һ�� Smith ��"<<endl;
	int top=4937774;
	top++;
	if(isPrime(top)) {
		top+=1;
	}
	while(!isSmith(top)){
		top++; 
		if(isPrime(top)) {
			top+=1;
		}
	}
	cout<<"����Ϊ��"<<top<<endl;
} 
 
