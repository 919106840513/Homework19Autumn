#include<iostream.h>
void main()
{    char a[50];
     cin>>a;
	 cout<<"�޸�ǰ:"<<a<<'\n';
	 for(int i=0;a[i];i++)
		 if(a[i]>='A'&&a[i]<='Z')
			 a[i]+=32;
	 cout<<"�޸ĺ�:"<<a<<'\n';
}