#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a=1,b;
    while(a<10)
    {
       b=pow(a,4);
       if(b>9999)
       {
                 break;
       }
       cout<<"FORTH POWER OF "<<a<<" is "<<b<<endl;
       a++;
       }
    system("pause");
}        
