#include<iostream>
#include<fstream>   // file handling stream
using namespace std;
int main()
{

    fstream myfile;
    myfile.open("datafile.txt", ios::out); // open the file for writing

    // EXCEED UNI FEE
    char again='Y';
    while(again=='Y'||again=='y')
    {
    char cat,aitizaz,jinnah,syed;
    int messdues,hosteldues,unidues,hostel,newdues;
    cout<<"WELCOME TO NUST\n";
    cout<<"PRESS\n 1:aitizaz\n 2:jinnah\n 3:syed\n";
    cout<<"ENTER THE HOSTEL NUMBER\n";
    cin>>hostel;
    switch(hostel)
    {
                  case(1):
                                         {
                                                int days,dues;
                                                cout<<"Aitizaz"<<"\n";
                                                myfile <<"Hostel: Aitizaz"<<"\n";
                                                cout<<"ENTER THE DAYS OF STAY\n";
                                                cin>>days;
                                                myfile << "Days of stay: " << days << endl;
                                                cout<<endl;
                                                dues=200*days;
                                                cout<<"YOUR HOSTEL DUES ARE RS\n";
                                                cout<<dues<<endl;
                                                cout<<endl;
                                                int newdues,k;
   if(days<=10 && days>0)
                  {
                              
                              cout<<"normal dues\n";
                              cout<<"YOUR DUES ARE";
                              cout<<endl;
                              cout<<dues<<"\n";
                              myfile << "Normal dues: " << dues << endl;
                              cout<<endl;
                  }
else if(days<=20)
                  {
                              cout<<"40% extra dues\n";
                              k=dues*40/100;
                              newdues=dues+k;
                              cout<<"Your dues are "<<"\n";
                              cout<<newdues<<"\n";
                              myfile<<"40% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }
else if (days>20)
{
                              cout<<"70% extra dues\n";
                              k=dues*70/100;
                              newdues=dues+k;
                              cout<<"Your dues are "<<"\n";
                              cout<<newdues<<"\n";
                              myfile<<"70% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }
else
{
    cout<<"NO HOSTEL DUES\n";
    cout<<newdues;
    cout<<endl;
}
                                                break;
                                         }
                  case(2):
                                         {
                                                int days,dues;
                                                cout<<"JINNAH"<<"\n";
                                                myfile<<"Hostel: JINNAH"<<"\n";
                                                cout<<"ENTER THE DAYS OF STAY\n";
                                                cin>>days;
                                                myfile << "Days of stay: " << days << endl;
                                                cout<<endl;
                                                dues=300*days;
                                                cout<<"YOUR HOSTEL DUES ARE ";
                                                cout<<dues<<endl;
                                                cout<<endl;
                                                int newdues,k;
   if(days<=10 && days>0)
                  {
                              
                              cout<<"normal dues\n";
                              cout<<"YOUR DUES ARE ";
                              cout<<dues<<"\n";
                              myfile << "Normal dues: " << dues << endl;
                              cout<<endl;
                  }
else if(days<=20)
                  {
                              cout<<"40% extra dues\n";
                              k=dues*40/100;
                              newdues=dues+k;
                              cout<<"Your dues are ";
                              cout<<newdues<<"\n";
                              myfile<<"40% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }
                  else if (days>20)
{
                              cout<<"70% extra dues\n";
                              k=dues*70/100;
                              newdues=dues+k;
                              cout<<"Your dues are "<<"\n";
                              cout<<newdues<<"\n";
                              myfile<<"70% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }

else
{
    cout<<"NO HOSTEL DUES\n";
    cout<<newdues;
    cout<<endl;
}
                                                break;
                                         }
                  case(3):
                                         {
                                                int days,dues;
                                                cout<<"SIR SYED"<<"\n";
                                                myfile<<"Hostel: SIR SYED"<<"\n";
                                                cout<<"ENTER THE DAYS OF STAY\n";
                                                cin>>days;
                                                myfile << "Days of stay: " << days << endl;
                                                cout<<endl;
                                                dues=200*days;
                                                cout<<"YOUR HOSTEL DUES ARE ";
                                                cout<<dues<<endl;
                                                cout<<endl;
                                                int newdues,k;
   if(days<=10 && days>0)
                  {
                              
                              cout<<"normal dues\n";
                              cout<<"YOUR DUES ARE ";
                              cout<<dues<<"\n";
                              myfile << "Normal dues: " << dues << endl;
                              cout<<endl;
                  }
else if(days<=20)
                  {
                              cout<<"40% extra dues\n";
                              k=dues*40/100;
                              newdues=dues+k;
                              cout<<"Your dues are ";
                              cout<<newdues<<"\n";
                              myfile<<"40% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }
                  else if (days>20)
{
                              cout<<"70% extra dues\n";
                              k=dues*70/100;
                              newdues=dues+k;
                              cout<<"Your dues are "<<"\n";
                              cout<<newdues<<"\n";
                              myfile<<"70% extra dues:"<<newdues<<endl;
                              cout<<endl;
                  }

else
{
    cout<<"NO HOSTEL DUES\n";
    cout<<newdues;
    cout<<endl;
}
                                                break;
                                         }

                  default:
                          {
                                         cout<<"INVALID ENTER\n";
                                         cout<<endl;
                                         }
}
                  cout<<"ARE YOU AVAILING MESS FACILITY\n";
cout<<"PRESS 1: yes, PRESS 2: no \n";
int condition;
cin>>condition;
if(condition==1)
{
                cout<<"ENTER THE NUMBER OF DAYS\n";
                int a;
                cin>>a;
                myfile<<"Mess Facility: yes"<<endl;
                messdues=220*a;
                myfile<<"Mess Dues: "<<messdues<<endl;
                cout<<"YOUR DUES ARE "<<messdues<<endl;
}
else
{
    cout<<"YOU ARE THE HAPPIEST PERSON\n";
    myfile<<"Mess Facility: no"<<endl;
    cout<<endl;
}
cout<<"IN WHICH SEMESTER YOU ARE STUDYING?\n";
cout<<"ENTER FROM 1 TO 8\n";
cout<<endl;
int sem,sfee;
cin>>sem;
myfile<<"Semester: "<<sem<<endl;
switch(sem)
{
           case 1:
                cout<<"YOU HAVE DUES ARE ";
               sfee=1*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 2:
                cout<<"YOU HAVE DUES ARE ";
               sfee=2*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 3:
                cout<<"YOU HAVE DUES ARE ";
               sfee=3*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 4:
                cout<<"YOU HAVE DUES ARE ";
               sfee=4*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 5:
                cout<<"YOU HAVE DUES ARE ";
               sfee=5*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 6:
                cout<<"YOU HAVE DUES ARE ";
               sfee=6*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 7:
                cout<<"YOU HAVE DUES ARE ";
               sfee=7*112000;
                cout<<sfee;
                cout<<endl;
                break;
           case 8:
                cout<<"YOU HAVE DUES ARE ";
               sfee=8*112000; 
                cout<<sfee;
                 cout<<endl;
                break;
           default:
                cout<<"INVALID ENTRY";
}
myfile<<"Semester Fee: "<<sfee<<endl;
int totalcost;
totalcost=sfee+messdues+newdues;
cout<<"Your DUES ARE RS "<<totalcost;
myfile<<"Total Dues: "<<totalcost<<endl;
cout<<endl;

  int sch,amount,hcost;
cout<<"Are you AWARDED SCHOLARSHIP\n";
cout<<"PRESS 1 for YES OR 2 FOR NO\n";
cout<<endl;
cin>>sch;
if(sch==1)
{
    myfile<<"Scholarship Awarded: yes"<<endl;
cout<<"ENTER THE AMOUNT OF SCHOLARSHIP\n";
cin>>amount;
myfile<<"Scholarship Amount: "<<amount<<endl;
hcost=totalcost-amount;
cout<<"YOUR NEW AMOUNT TO BE PAID IS\n";
cout<<"RS "<<hcost;
myfile<<"Amount to be Paid: "<<hcost<<endl;
cout<<endl;
int paid,lcost;
cout<<"HOW MUCH AMOUNT DO YOU PAID\n";
cin>>paid;
myfile<<"Already Paid: "<<paid<<endl;
cout<<"YOUR NEW AMOUNT TO BE APID IS\n";
lcost=hcost-paid;
cout<<lcost;
myfile<<"To be Paid: "<<lcost<<endl;
cout<<endl;
cout<<endl;
}
else
{
    myfile<<"Scholarship Awarded: no"<<endl;
    cout<<"NO SCHOLARSHIP AWARDED\n";
    cout<<"YOUR DUES ARE\n";
    cout<<totalcost;
    myfile<<"Amount to be Paid: "<<totalcost<<endl;
    int paid,lcost;
cout<<"HOW MUCH AMOUNT DO YOU PAID\n";
cin>>paid;
myfile<<"Already Paid: "<<paid<<endl;
cout<<"YOUR NEW AMOUNT TO BE APID IS\n";
cout<<endl;
lcost=totalcost-paid;
cout<<lcost;
myfile<<"To be Paid: "<<lcost<<endl;
cout<<endl;
}
myfile<<endl;
myfile<<endl;
cout<<"DO YOU WANT TO AGAIN RUN THE PROGRAM\n";
cout<<"PRESS Y or y TO RUN AGAIN\n";
cin>>again;
cout<<endl;
}
myfile.close();
system("pause");
}
