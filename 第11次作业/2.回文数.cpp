#include <iostream> 
using namespace std;
bool ishuiwen(int n)
{
    int a=1;
    while(n/a>=10)
    {
        a=a*10;
    }
    while(n!=0)
    {
        if(n/a!=n%10)
        {
            return false;
        }
        n=(n%a)/10;
        a=a/100;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(ishuiwen(n))
    {
        cout<<"�����ǻ�����"<<endl;
    }
    else
    {
        cout<<"�������ǻ�����"<<endl;
    }
    return 0;
}
