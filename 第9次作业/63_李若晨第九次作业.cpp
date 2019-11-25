(8)多文件

//main.cpp

#include<iostream>

#include"max.cpp"

#include"hex.cpp"

using namespace std;

int main(){

	int x,y;

	cin>>x>>y;

	toHex((max(x,y)));

	return 0;

} 



//max.cpp

int max(int x,int y){

	return x>y?x:y;

}



//hex.cpp

#include<iostream>

using namespace std;

void toHex(int x){	

	cout<<hex<<x;

}





(8)单文件

#include<iostream>

using namespace std;

int max(int x,int y){

	return x>y?x:y;

}

void toHex(int x){	

	cout<<hex<<x;

}

int main(){

	int x,y;

	cin>>x>>y;

	toHex((max(x,y)));

	return 0;

} 



(9)用函数

#include<iostream>

#include<math.h>

using namespace std;

double area(double a,double b,double c){

	double s=(a+b+c)/2;

	return sqrt(s*(s-a)*(s-b)*(s-c));

}

int main(){

	double a,b,c;

	cin>>a>>b>>c;

	cout<<area(a,b,c);

} 



(9)用宏

#include<iostream>

#include<math.h>

#define s ((a+b+c)/2)

#define area sqrt(s*(s-a)*(s-b)*(s-c))

using namespace std;

int main(){

	double a,b,c;

	cin>>a>>b>>c;

	cout<<area;

} 
