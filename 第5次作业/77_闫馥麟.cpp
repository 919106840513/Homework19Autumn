//  ��2��

#include <iostream>
using namespace std;
int main (void )
{
	float i,b1,b2,b4,b6,b10,b;
	cout<<"����������" <<endl;
	cin>>i;
	b=100000*0.1;
	b2=b1+100000*0.075;
	b4=b2+200000*0.05;
	b6=b4+200000*0.03;
	b10=b6+400000*0.015;
	if (i<=100000)
	b=i*0.1;
	else
		if(i<=200000)
		b=b1+(i-100000)*0.075;
		else
			if (i<=400000)
			b=b2+(i-200000)*0.05;
			else
				if (i<=600000)
				b=b4+(i-400000)*0.03;
				else
					if(i<=1000000) 
					b=b6+(i-600000)*0.015;
					else
					b=b10+(i-1000000)*0.01;
	cout<<"���Ϊ��"<<b;
	return 0;
}


//��4��

#include <iostream>
using namespace std;
int main(void)
{
	int nian,yue,ri,sum,run;
	cout<<"������������"<<endl;
	cin>>nian>>yue>>ri;
	switch(yue)
	{
		case 1:sum=0;
		break;
		case 2:sum=31;
		break;
		case 3:sum=59;
		break;
		case 4:sum=90;
		break;
		case 5:sum=120;
		break;
		case 6:sum=151;
		break;
		case 7:sum=181;
		break;
		case 8:sum=212;
		break;
		case 9:sum=243;
		break;
		case 10:sum=273;
		break;
		case 11:sum=304;
		break;
		case 12:sum=334;
		break;
		default:cout<<"�·��������"<<endl;
	}
	sum=sum+ri;
	if (nian%4==0&&nian%100!=0||nian%400==0)
	run=1;
	else 
	run=0;
	if (run==1&&yue>2)
	sum++;
	cout<<"������һ��ĵ�"<<sum<<"��"<<endl;
	return 0;
}


//��6��

#include <iostream>
using namespace std;
int main(void)
{
	cout<<"******"<<endl;
	cout<<"**"<<endl;
	cout<<"*"<<endl;
	cout<<"*"<<endl;
	cout<<"**"<<endl;
	cout<<"******"<<endl; 
	return 0;
} 

//��8��

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int i,j,k;
	cout<<"9x9�˷��ھ���"<<endl;
	cout<<'\n';
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=i;j++)
			cout<<i<<"x"<<j<<"="<<setw(2)<<i*j<<' ';	
	cout<<'\n';
	 } 
	 return 0;
} 

//��10��

#include <iostream>
using namespace std;
int main (void)
{
	int i,j;
	cout<<'\1'<<'\1'<<endl;
	for (i=1;i<=15;i++)
	{
		for (j=1;j<=i;j++)
		printf ("%c%c",219,219);
	cout<<'\n';
	}
	return 0;
} 
 
