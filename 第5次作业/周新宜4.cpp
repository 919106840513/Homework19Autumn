using namespace std;
#include <iostream>
int main(void)
{
	int year,month,day,sum,leap;
	cout<<"Please input year,month,day.\n";
    cout<<"year ";
    cin>>year;
    cout<<"month ";
    cin>>month;
    cout<<"day ";
    cin>>day;
    switch(month)//����ĳ����ǰ�·ݵ�������
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
	    default:cout<<"date error"<<endl; 
	} 
	sum=sum+day;//����ĳ�������
	if(year%4==0)//�ж��Ƿ������� 
	  leap=1;
	else
	  leap=0;
	if(leap=1&&month>2)
	  sum++;
	cout<<"���ǽ����"<<sum<<"��"<<endl;
	return 0;
	
}
