//��ҵ6-21  2019��10��23�� 
#include<iostream>
#include<cmath> 
using namespace std;
//(2)��λ��֮�� 
int digitSum(int x){
	int sum=0;
	while(x!=0){
		sum=sum+x%10;
		x/=10;
	}
	return sum;
} 

//(4)����������
bool isPrime(int n){
	if(n==1||n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
} 

//(5)�ֽ���������
void primeFac(int n){
	cout<<n<<'='; 
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			cout<<i;
			if(n!=1) cout<<'*';
		}
	}
	if(n!=1) cout<<n;
} 


int main(){
	int x=987,y=345 ;
	cout<<"�ڣ�2���⣬��������x=987,y=345:"<<endl; 
	cout<<"987��λ��֮�ͣ�"<<digitSum(x)<<endl;
	cout<<"345��λ��֮�ͣ�"<<digitSum(y)<<endl<<endl;
	cout<<"-------------�ָ���----------------"<<endl;
	cout<<"�ڣ�4���⣬���500������������"<<endl; 
	for(int i=1;i<=500;i++){
		if(isPrime(i)&&isPrime(i+2))
			cout<<i<<' '<<i+2<<endl;
	}
	cout<<endl;
	cout<<"-------------�ָ���----------------"<<endl; 
	cout<<"�ڣ�5���⣬������Ҫ�ֽ�����������������"; 
	int m;
	cin>>m;
	primeFac(m);
	return 0;
}
