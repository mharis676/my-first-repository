#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char o='Y';
    while(o=='y'||o=='Y')
    {
  int a,c,rem,reverse,d;
  int b[100];
    cout<<"ENTER THE DECIMAL NUMBER\n";
    cin>>a;
    while(a!=0)
{
    for(c=1;c<=100;c++)
    {
               b[c]=a%2;
               a=a/2;
}
for(d=20;d>=1;d--)
{
                   cout<<b[d];
}
cout<<endl;
}
cout<<"DO YOU WANT TO RUN IT AGAIN\n";
cin>>o;
}
system("pause");
}
