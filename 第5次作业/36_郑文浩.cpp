#include<iostream> 
using namespace std;
int main(){
		long int i;            //����2 
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin >> i;
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.75;
  bonus4=bonus2+200000*0.5;
  bonus6=bonus4+200000*0.3;
  bonus10=bonus6+400000*0.15;
  if(i<=100000)
    bonus=i*0.1;
    else if(i<=200000)
      bonus=bonus1+(i-100000)*0.075;
        else if(i<=400000)
          bonus=bonus2+(i-200000)*0.05;
            else if(i<=600000)
              bonus=bonus4+(i-400000)*0.03;
                else if(i<=1000000)
                  bonus=bonus6+(i-600000)*0.015;
                    else
                      bonus=bonus10+(i-1000000)*0.01;
  cout << bonus << endl;
  
  int day,month,year,sum,leap;           //����4 
	cin >> year >>month >>day ;
	cout <<year << month << day<< "     ";
  switch(month) /*�ȼ���ĳ����ǰ�·ݵ�������*/
  {
    case 1:sum=0;break;
    case 2:sum=31;break;
    case 3:sum=59;break;
    case 4:sum=90;break;
    case 5:sum=120;break;
    case 6:sum=151;break;
    case 7:sum=181;break;
    case 8:sum=212;break;
    case 9:sum=243;break;
    case 10:sum=273;break;
    case 11:sum=304;break;
    case 12:sum=334;break;
    default:cout << "data error";break;
  }
  sum=sum+day; /*�ټ���ĳ�������*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*�ж��ǲ�������*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*������������·ݴ���2,������Ӧ�ü�һ��*/
    sum++;
  cout << "It is the " << sum << "th day "<< endl;
  
  cout <<"Hello C-world!\n";           //����6 
  cout << " ****\n";
  cout <<" *\n";
  cout <<" * \n";
  cout << " ****\n";
  
  for (int i=1;i<=9;i++){               //����8 
  	for(int j =1;j<=i;j++){
  		cout << j << 'x'<< i << '='<< j*i<< ' ' ; 
	  }
	  cout << endl;}
	  
	  int l,j;                     //����10 
  cout <<"\1\1\n"; /*�������Ц��*/
  for(l=1;l<11;l++)
  {
    for(j=1;j<=l;j++){
	
      char c=100;
      cout << c << c;}
      cout <<"\n";
}

  }

 
