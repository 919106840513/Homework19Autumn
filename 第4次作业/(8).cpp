#include <iostream>
using namespace std;
int main(void){
	int x,i,j,n;
	cout<<"������������"<<endl; 
	cin>>x; 
	for(i=1;i<=x;i++)
	{
	if(x%i=0)
    cout<<i<<' ';
}
cout<<"1~100��ȫ���У�"<<endl;
for(n=6;n<=100;n++) 
{for(j=1;j<=n;j++){

if(n%j=0)
n+=j;
cout<<n<<endl;
}
}return 0;
}

