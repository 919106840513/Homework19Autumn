#include<iostream>
#include <string.h>
#define MAX 5
using namespace std;   
int getRev(char *a)
{int sum=0;
for(int i=0;i<=strlen(a)-1;i++)
  {for(int j=i+1;j<strlen(a);j++)
    {if(*(a+i)>*(a+j)))
    sum++;
    }
  }
  return sum;
}
int main()
{int i,temp=0;
int paixu[MAX];
char a[MAX][21]={"DAABEC",
                 "gsogsogbsohg",
                 "46gs46gh4ng4",
                 "SRRRRRRRRUT",
                 "AFAFeaegerigj",
                        };
                        char tem[MAX][21];
   for(int i=0;i<MAX;i++)
  paixu[i]=getRev(a[i]);
             for(int i=0;i<MAX-1;i++)
			 {for(int j=0;j<MAX-1-i;j++)
             if(paixu[j]>paixu[j+1])
             { temp=paixu[j];
             paixu[j]=paixu[j+1];
             paixu[j+1]=temp;
             strcpy(tem[0],a[j]);
             strcpy(a[j],a[j+1]);
             strcpy(a[j+1],tem[0]);
             }
             }
			 
   
for(int m=0;m<MAX;m++)
cout<<a[m]<<" "<<paixu[m]<<endl;
return 0;
}
