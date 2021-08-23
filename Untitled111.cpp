#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file; 
new_file.open("new_file_write.txt",ios::in);   
if(!new_file) 
cout<<"No such file"; } 
else;
{ char ch; 
while (!new_file.eof()) 
{ new_file >>ch; 
cout << ch;   
}
new_file.close();    
return 0;
}
