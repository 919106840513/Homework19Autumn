using namespace std;
#include <iostream>
#define N 10
int b[9]={0},k=0;
int getSet(int rs[],const int a[],int n)
{
	
	for(int m=0;m<n;m++)
	{
		if(b[a[m]]==0)
		{
			b[a[m]]++;
			rs[k]=a[m];
			k++;
		}
		else
		    b[a[m]]++;
	}
	for(int s=0;s<k;s++)
	  cout<<rs[s]<<" "; 
	return k;
}
void cishu(int rs[],int n)
{
	for(int i=0;i<n;i++)
      cout<<rs[i]<<":"<<b[rs[i]]<<endl;
}
void paixu(int rs[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
	    int max=b[rs[i]];
        for(j=i;j<n-1;j++)
        {
		    if(max<b[rs[j+1]])
            {      
			    k=rs[j];
 			  	rs[j]=rs[j+1];
 				rs[j+1]=k;
            }
        }

    } 
    for(int i=0;i<n;i++)
	{
 		cout<<rs[i]<<":"<<b[rs[i]]<<endl;
    }
}
int main()
{
	int a[N]={3,1,2,3,1,5,2,1},rs[999];
	int num=getSet(rs,a,N);
	cout<<"������Ԫ�صĸ���"<<num<<endl;
	for(int i=0;i<num;i++)
	  cout<<rs[i]<<'\t';
	cout<<endl;
	cout<<"��Ԫ�س��ִ���"<<endl;
	cishu(rs,num);
	cout<<"��������󣬸�Ԫ�س��ִ���"<<endl;
 	paixu(rs,num);
	return 0;
}

