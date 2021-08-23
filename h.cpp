#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
using namespace std;
struct hotel
{
    int room_no[50];
    string name[50] ;
    string adress[50];
    int mobile_no[50];
    int bill[50];
    int days[50];
    int room;
    int flag;
    fstream records;

void main_menu();
int book_rooms();
int customer_records();
int rooms_alloted();
int edit_records();
int customer_bills();
int check(int);
};

void hotel :: main_menu()
{
    int choice;
while(choice!=6)
{

  system("cls");
cout<<"\n\t\t\t\t*************************";
cout<<"\n\t\t\t\t HOTEL MANAGEMENT SYSTEM ";
cout<<"\n\t\t\t\t      * MAIN MENU *";
cout<<"\n\t\t\t\t*************************";
cout<<"\n\n\n\t\t\t1.Book A Room";
cout<<"\n\t\t\t2.Customer Records";
cout<<"\n\t\t\t3.Rooms Allotted";
cout<<"\n\t\t\t4.Edit Record";
cout<<"\n\t\t\t5.Customer Bills";
cout<<"\n\t\t\t6.Exit";
cout<<"\n\n\t\t\tEnter Your Choice: ";
cin>>choice;
switch (choice)
{
case 1:
    {
        book_rooms();
        break;
    }
    case 2:
    {
        customer_records();
        break;
    }
    case 3:
    {
        rooms_alloted();
        break;
    }
    case 4:
    {
        edit_records();
        break;
    }
    case 5:
    {
        customer_bills();
        break;
    }
    case 6:
    {
        break;
    }
}

}
}
int hotel:: book_rooms()
{
    int flag,r;
    system("cls");
    int room;
    cout<<"\n\t*************************";
    cout<<"\n\t     ROOM BOOKING";
    cout<<"\n\t*************************";
    cout<<"\n\nPlease enter the room number you want to book.";
    cout<<"\n1: Standard room(Room 1-20) (Rs.1000/night)";
    cout<<"\n2.Suite(Room 21-40) (Rs.5000/night)";
    cout<<"\n3.Luxury Room(Room 41-50) (Rs.10000/night)\n";
    fstream records;

    cin>>room;
    flag=check(room);
    if(flag==1)
    {
        cout<<"Sorry this room has been taken";
        system("pause");
    }
    else{
            room_no[room-1]=room;

    records<<"Room "<<room_no[room-1]<<"\n";
    cout<<"Name:";
    getline(cin, name[room]);
    getline(cin, name[room]);
    records<<name[room]<<"\n";
    cout<<"Adress:";
    getline(cin, adress[room]);
    records<<adress[room]<<"\n";
    cout<<"\nMobile no: ";
    cin>>mobile_no[room];
    records<<mobile_no[room]<<"\n";
    records.close();
    cout<<"\nYour room has been booked\n";
    system("pause");
}}
int hotel:: customer_records()
{

}
int hotel::rooms_alloted()
{

}
int hotel::edit_records()
{

}

int hotel::customer_bills()
{
    cout<<"\n\t***GENERATE BILL***\n";
    cout<<"\n\tEnter the room type?\n";
    cout<<"\n\tPRESS 1: Standard room\n";
    cout<<"\n\tPRESS 2: Suite\n";
    cout<<"\n\tPRESS 3: Luxury Room\n";
    int room;
    cin>>room;
    switch(room)
    {
        case 1:
        {
            cout<<"Enter the nights of your stay\n";
            int days1;
            cin>>days1;
            int sum1;
            sum1=days1*1000;
            cout<<"Your bill is ";
            cout<<sum1<<endl;
            system("pause");
            break;
    }
        case 2:
        {
            cout<<"Enter the nights of your stay\n";
            int days2;
            cin>>days2;
            int sum2;
            sum2=days2*5000;
            cout<<"Your bill is ";
            cout<<sum2<<"\n";
            system("pause");
            break;
        }
        case 3:
            {
            cout<<"Enter the nights of your stay\n";
            int day3;
            cin>>day3;
            int sum3;
            sum3=day3*10000;
            cout<<"Your bill is ";
            cout<<sum3<<"\n";
            system("pause");
            break;
        }
}
}
int hotel::check(int r)
{
ifstream records("rooms.txt",ios::in);

while(!records.eof())
{

records>>room_no[r-1];
if(room_no[r-1]==r)
    {
    flag=1;
    break;
    }

}

records.close();
return flag;

}




int main()
{
    hotel p;
    p.main_menu();
}
