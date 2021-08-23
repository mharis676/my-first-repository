#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string>
using namespace std;
struct hotel                       //declaring a structure that contains some global variables and function prototypes
{
    int room_no[51];
    string name[51];
    string adress[51];
    int mobile_no[51];

    int bill[51];
    int days[51];
    int room;
    int room1;
    int flag = 0;

    void main_menu();
    void book_rooms();
    int customer_records();
    int rooms_alloted();
    int edit_records();
    int customer_bills();
    int check(int);
};

void hotel::main_menu()                                                        //Making a main_menu function that will call all other functions in it
{
    int choice = 0;                                                           //declaration of variable
    while (choice != 6)
    {
        system("cls");
        cout << "\t\t\t***************\n";
        cout << "\t\t\t\t HOTEL MANAGEMENT SYSTEM             ";
        cout << "\n\t\t\t\t      * MAIN MENU *                 ";
        cout << "\n\t\t\t***************\n";
        cout << "\n\n\n\t\t\t1.Book A Room";
        cout << "\n\t\t\t2.Customer Records";
        cout << "\n\t\t\t3.Rooms Allotted";
        cout << "\n\t\t\t4.Edit Record";
        cout << "\n\t\t\t5.Customer Bills";
        cout << "\n\t\t\t6.Exit";
        cout << "\n\n\t\t\tEnter Your Choice: ";
        cin >> choice;
        switch (choice)                                                   //Using switch statement to call the desired function usin specific number
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
void hotel::book_rooms()                                                           //making a book_rooms function to book the rooms
{
    char yes = 'y';                                                                //initialization and declaratin of variable

    while (yes == 'y')                                                             //using while loop
    {
        system("cls");
        int room;
        cout << "\t\t\t***********\n";
        cout << "\t\t\t\tROOM BOOKING\n";
        cout << "\t\t\t***********\n";
        cout << "\n\nPlease enter the room number you want to book.";
        cout << "\n1: Standard room(Room 1-20) (Rs.1000/night)";
        cout << "\n2.Suite(Room 21-40) (Rs.5000/night)";
        cout << "\n3.Luxury Room(Room 41-50) (Rs.10000/night)\n";
        cin >> room;
        flag = check(room);                                                         //calling the check function to see whether that entered room is booked or not
        ofstream records{ "rooms.dat", ios_base::app };
       
        //using if ele statement
        
        
        if (flag == 1)                              //will work if book is already booked
        {
            cout << "Sorry this room has been taken";
            system("pause");
        }
        else {
           
            
            //taking the required getails from user and saving it in file
            
            cout << "\n";
            room_no[room] = room;
            records << "Room " << room_no[room] << "\n";
            cout << "Name:";
            getline(cin, name[room]);
            getline(cin, name[room]);
            records << name[room] << "\n";
            cout << "Adress:";
            getline(cin, adress[room]);
            records << adress[room] << "\n";
            cout << "\nMobile no: ";
            cin >> mobile_no[room];
            records << mobile_no[room] << "\n ";
            cout << "\nYour room has been booked\n";
            cout << "Do you want to book another room.\n Press 'y' for yes and 'n' for no\n";
            cin >> yes;
        }
        records.close();                                              //file closed
    }
    system("pause");
}

int hotel::customer_records()                                                   //Making a read datda from file display it on the console
{
    system("cls");
    ifstream records;
    char var = 'y';
    records.open("rooms.dat", ios::app);                                          //opening the file using ifstream variable
    cout << "\t\t\t***********\n";
    cout << "\t\t\t\tCUSTOMER RECORDS\n";
    cout << "\t\t\t***********\n";
    cout << "Enter room number:" << endl;
    cin >> room;

    while (!records.eof() || var == 'y')                                            //using while loop to read the content of file
    {
        records >> room_no[room] >> name[room] >> adress[room] >> mobile_no[room];
        cout << "\nName:";
        cout << name[room];
        cout << "\nAddress:";
        cout << adress[room] << "\n";
        cout << "Mobile number:";
        cout << mobile_no[room];
        cout << "Do you want to view another record.\n Press 'y' for yes and 'n' for no\n";
        cin >> var;
        cout << endl;
        records.close();
        system("pause");
        return 0;
        break;
    }
    return 0;
}




int hotel::rooms_alloted()                                               //Making afunction for showning alloted rooms
{
    system("cls");
    cout << "\t\t\t***********\n";
    cout << "\t\t\t\tROOMS ALLOTED\n";
    cout << "\t\t\t***********\n";
    int i = 1;
    ifstream records;
    records.open("rooms.dat", ios::app);
    cout << "\tRoom no." << "\tName" << "\t\t Address" << "\t Mobile no.\n";



    while (records >> room_no[room] >> name[room] >> adress[room] >> mobile_no[room])                    //using while function to ready the file
    {

        cout << "\t" << room_no[room] << "\t\t" << name[room] << "\t\t" << adress[room] << "\t\t" << mobile_no[room] << endl;

    }
    records.close();
    system("pause");

    return 0;
}





int hotel::edit_records()                                                 //making a function to edit or delete details of customer
{
    system("cls");
    ifstream records;
    int choice1;
    int a;
    cout << "\t\t\t\t***********\n";
    cout << "\t\t\t\t\tEDIT RECORDS\n";
    cout << "\t\t\t\t***********\n";
    cout << "\tEnter 1 to delete the data :\n ";
    cout << "\tEnter 2 to edit the data : \n";
    cin >> choice1;
    switch (choice1)                                              //using switch statement to select the desired operation that will be done on data
    {
    case 1:
    {
        cout << "\nEnter the room number of whom you want to delete data : \n";
        cin >> a;
        records.open("rooms.dat", ios::app);
        ofstream records1;
        records1.open("new.dat");
        records >> room_no[room] >> name[room] >> adress[room] >> mobile_no[room];
       
        
        //using while loop to delete the data of customer
        
        while (!records.eof())                     //reading fille till it ends
        {
            if (room != a)
            {
                records1 << endl;
                records1 << room_no[room];
                records1 << endl;
                records1 << name[room];
                records1 << endl;
                records1 << adress[room];
                records1 << endl;
                records1 << mobile_no[room];
                records1 << endl;

            }
            else
            {
                cout << "\nThe customer data has been deleted\n ";
            }
            records >> room_no[room] >> name[room] >> adress[room] >> mobile_no[room];
            break;


        }
        records1.close();
        records.close();
       
        //using remove and rename function to remove or rename file
        
        
        if (remove("rooms.dat") != 0)
        {
            cout << "\nNot removed";
        }
        else
        {
            cout << "Ok";
        }

        if (rename("new.dat", "rooms.dat") != 0)
        {
            cout << "\nNot ok";
        }
        else
        {
            cout << "Ok";
        }
        system("pause");
        break;
    }
    case 2:
    {
        //declaration of strings and array
        string x[51], y[51];                 
        int z[25];
       
        //geting values from user
        
        cout << "Enter the room number of whom you want to edit data : ";
        cin >> a;
        cout << "\nEnter new name : ";
        getline(cin, x[50]);
        getline(cin, x[50]);
        cout << "\nEnter new address : ";
        getline(cin, y[50]);
        cout << "\nEnter new mobile number : ";
        cin >> z[24];
        records.open("rooms.dat");
        ofstream records1;
        records1.open("new.dat");
        records >> room_no[room] >> name[room] >> adress[room] >> mobile_no[room];
        while (!records.eof())                                                                 //using while loop to read the file
        {
            if (room != a)
            {
                records1 << endl;
                records1 << room_no[room];
                records1 << endl;
                records1 << name[room];
                records1 << endl;
                records1 << adress[room];
                records1 << endl;
                records1 << mobile_no[room];
                records1 << endl;

            }
            else
            {                                            //saving the new data of customer
                records1 << "Room " << a;
                records1 << endl;
                records1 << x[50];
                records1 << endl;
                records1 << y[50];
                records1 << endl;
                records1 << z[24];
                records1 << endl;
            }
            break;
        }
        records1.close();
        records.close();

       
        //using remove and rename function to remove or rename file

        
        
        if (remove("rooms.dat") != 0)
        {
            cout << "\nNot removed";
        }
        else
        {
            cout << "Ok";
        }

        if (rename("new.dat", "rooms.dat") != 0)
        {
            cout << "\nNot ok";
        }
        else
        {
            cout << "Ok";
        }
        system("pause");
        break;
    }



    }

    system("pause");

    return 0;

}





int hotel::customer_bills()                                 //making a customer_bills function to calculate bills of customer
{
    cout << "\n\t*GENERATE BILL*\n";
    cout << "\n\tEnter the room type?\n";
    cout << "\n\tPRESS 1: Standard room\n";
    cout << "\n\tPRESS 2: Suite\n";
    cout << "\n\tPRESS 3: Luxury Room\n";
    int room;                                                     //Declaration of integer
    cin >> room;
    switch (room)                                               //using swtich statement on variable and will make bill according to room type
    {
    case 1:
    {
        cout << "Enter the nights of your stay\n";
        int days1;
        cin >> days1;
        int sum1;
        sum1 = days1 * 1000;
        cout << "Your bill is ";
        cout << sum1 << endl;
        system("pause");
        break;
    }
    case 2:
    {
        cout << "Enter the nights of your stay\n";
        int days2;
        cin >> days2;
        int sum2;
        sum2 = days2 * 5000;
        cout << "Your bill is ";
        cout << sum2 << "\n";
        system("pause");
        break;
    }
    case 3:
    {
        cout << "Enter the nights of your stay\n";
        int day3;
        cin >> day3;
        int sum3;
        sum3 = day3 * 10000;
        cout << "Your bill is ";
        cout << sum3 << "\n";
        system("pause");
        break;
    }
    }
    return 0;
}




int hotel::check(int r)                                //Making a check funtion that will check where the room is already booked or not
{
    flag = 0;
    ifstream records("rooms.txt", ios::app);
    while (!records.eof())                               //using while loop and file handling 
    {


        records >> room_no[r];
        if (room_no[r] == r)
        {
            flag = 1;
            break;

        }
    }

    records.close();
    return flag;

}


int main()
{
    hotel p;
    ofstream records;
    p.main_menu();                           //Calling the main_menu function in main function to start program

    return 0;                               //Main function is returning nothing
}
