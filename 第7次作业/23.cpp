using namespace std;
#include <iostream>
int main()
{
	int j,k,l,m,n;
	cout<<"����ƽ���ı��εĳ��͸�"<<endl;
	cin>>m>>n;
	for(j=0;j<n;j++)
	{
		for(k=n;k>j;k--)
			cout<<" ";
	    for(l=0;l<m;l++)
	        cout<<"*";
	    cout<<endl;	
	}
	cout<<endl;
	for(j=n;j>0;j--)
	{
		for(k=n;k>j;k--)
		    cout<<" ";
		for(l=0;l<m;l++)
		    cout<<"*";
		cout<<endl;
	}
	return 0; 
}
