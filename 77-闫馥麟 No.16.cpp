//课本237页41.(4)
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n,temp; 
    char str[20];
    cout<<"请输入想要输入的字符串的个数"<<endl;
    cin>>n;						//确认输入字符串的个数 
    const int N=n;
    int count[N];				//定义一个用于计数的数组 
    char a[N][20],b[N][20];
    for (int u=0;u<N;u++)		//初始化计数君：数组count 
    	count[u]=1;
    
    cout<<"输入字符串"<<endl;
	cin.getline(a[0],20);		//输入字符串并存储在二维数组a中 
	for(int i=0;i<N;i++)
        cin.getline(a[i],20);
        
	cout<<"按照字典序输出"<<endl;
	for (int p=0;p<N;p++)
		strcpy(b[p],a[p]);
	for(int t=0;t<N;t++)
	{
		for (int h=0;h<N-t-1;h++)
		{
			if (strcmp(b[h],b[h+1])>0)
			{
				strcpy(str,b[h+1]);
				strcpy(b[h+1],b[h]);
				strcpy(b[h],str);
			}
		}
	}
	for (int m=0;m<N;m++)
		cout<<m+1<<"   "<<b[m]<<endl;

    for(int j=0;j<N;j++)		//确认每种字符串出现的次数并记录在数组count中 
	{
    	for(int k=(j+1);k<N;k++)
    	{
    		if(count[j]&&count[k]&&strcmp(a[j],a[k])==0)
    		{
    			count[j]++;
    			count[k]=0;
			}
		}
	}
	for(int x=0;x<N;x++)			 //冒泡排序 
	{
		for(int y=0;y<N-x-1;y++)
		{
			
			if(count[y]<count[y+1])
			{
				temp=count[y+1];
				count[y+1]=count[y];
				count[y]=temp;
				strcpy(str,a[y+1]);
				strcpy(a[y+1],a[y]);
				strcpy(a[y],str);
			}
		}
	}
	cout<<endl;
	cout<<"按出现次数排序输出"<<endl;
	for(int k=0;count[k]&&k<N;k++)
	    cout<<a[k]<<" "<<count[k]<<endl;
} 



//课本237页41.(5)
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50],*p=str;
    int i,j=0,key=0,sum,a[100]={0};
	cin.getline(str,50);
	for(i=0;*(p+i)!='\0';i++)
	{ 
		if((*(p+i)>='0')&&(*(p+i)<='9'))
		{
			sum=j+1;
			a[j]=a[j]*10+*(p+i)-'0';
			key=1;
		}
		else if(key)
		{
   			a[++j]=0;
			key=0;
		}
	}
	for(i=0;i<sum;i++)
	cout<<a[i]<<endl;
	cout<<sum;
	return 0;	
}
