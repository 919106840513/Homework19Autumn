#include <iostream>
using namespace std;
#include <math.h>
#define A 3
#define B 4
#define C 5
#define S (A+B+C)/2
int main()
{
	if(A+B>C&&A+C>B&&B+C>A)
	{
		double area;
		area=sqrt(S*(S-A)*(S-B)*(S-C));
		cout<<area;
	} 
	else
	{
		cout<<"�޷����������Σ�"; 
	} 
	
	return 0;
}
