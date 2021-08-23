#include<iostream>
#include<conio.h>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    double a, b, c, result;
    double PI = 3.14159265;
    char indi = 'y', history;
    string opr;
    cout << endl;
    while (indi == 'y' || indi == 'Y')
    {
        cout << "welcome to calculator\n";
        cout << "------------------------------------------------\n";
        cout << "which operation do u want to perform\n";
        cout << "------------------------------------------------\n";
        int op;
        cout << " 1 addition\n 2 subtraction\n 3 multiplication\n 4 division\n 5 square\n 6 square root\n ";
        cout << "7 sin\n 8 cos\n 9 tan\n 10 exponental\n 11 CubeRoots\n 12 Average\n 13 Log with base e\n 14 Log with base 10\n";
        cout << " 15 tan inverse\n 16 cos inverse\n 17 sin inverse\n";
        cin >> op;
        cout << "------------------------------------------------\n";
        switch (op)
        {
        case(1):
            cout << "ENTER TWO NUMBERS\n";
            cin >> a;
            cin >> b;
            result = a + b;
            cout << "SUM OF THE NUMBER IS ";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(2):
            cout << "ENTER TWO NUMBERS\n";
            cin >> a;
            cin >> b;
            result = a - b;
            cout << "SUB OF THE NUMBER IS ";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(3):
            cout << "ENTER TWO NUMBERS\n";
            cin >> a;
            cin >> b;
            result = a * b;
            cout << "MULTIPLICATION OF THE NUMBER IS ";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(4):
            cout << "ENTER TWO NUMBERS\n";
            cin >> a;
            cin >> b;
            result = a / b;
            cout << "DIVISION OF THE NUMBER IS ";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(5):
            cout << "Enter number to square\n";
            cin >> a;
            result = pow(a, 2);
            cout << "SQUARE of number is\n";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(6):
            cout << "Enter number to find root\n";
            cin >> a;
            result = sqrt(a);
            cout << "SQUARE ROOT OF THE NUMBER IS\n";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(7):
            cout << "ENTER NUMBER TO FIND SIN\n";
            cin >> a;
            cout << "THE SINE OF THE NUMBER IS:\n";
            result = sin(a * PI / 180.0);
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(8):
            cout << "ENTER NUMBER TO FIND COS\n";
            cin >> a;
            cout << "THE COS OF THE NUMBER IS:\n";
            result = cos(a * PI / 180.0);
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(9):
            cout << "ENTER NUMBER TO FIND TAN\n";
            cin >> a;
            cout << "THE TANGENT OF THE NUMBER IS:\n";
            result = tan(a * PI / 180.0);
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(10):
            cout << "Enter the NUMBER:\n";
            cin >> a;
            cout << "ENTER POWER:";
            cin >> b;
            result = pow(a, b);
            cout << "result is\n:";
            cout << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(11):
            double number;
            cout << "Enter any number : \n";
            cin >> number;
            result = cbrt(number);
            cout << "\n\Cube root of " << number << " is:\n " << result << endl;
            cout << "------------------------------------------------\n";
            break;
        case(12):
            cout << "ENTER THE No. of items:\n";
            cin >> a;
            double sum;
            sum = 0;
            c = a;
            while (a >= 1)
            {
                cout << "ENTER VALUE\n";
                cin >> b;
                a = a - 1;
                sum = sum + b;
            }
            result = sum / c;
            cout << "THE AVERAGE OF THE NUMBER IS:\n";
            cout << result << endl;
            break;
        case (13):
            cout << "Enter the number :\n";
            cin >> a;
            result = log(a);
            cout << "Log = " << result << endl;
            break;
        case (14):
            cout << "Enter the number : ";
            cin >> a;
            result = log10(a);
            cout << "Log with base 10 = " << result << endl;
            break;
        case (15):
            cout << "Enter the number : ";
            cin >> a;
            result = atan(a) * 180.0 / PI;
            cout << "Inverse of tan = " << result << endl;
            break;
        case (16):
            cout << "Enter the number : ";
            cin >> a;
            result = acos(a) * 180.0 / PI;
            cout << "Inverse of Cos = " << result << endl;
            break;
        case (17):
            cout << "Enter the number : ";
            cin >> a;
            result = asin(a) * 180.0 / PI;
            cout << "Inverse of Sin = " << result << endl;
            break;
        default:
            cout << "WRONG INPUT\n";
            cout << "------------------------------------------------\n";
            break;
        }
        fstream h;
        h.open("History.txt", fstream::app);
        if (op == 1 || op == 2 || op == 3 || op == 4 || op == 10 || op == 12)
        {
            if (op == 10 || op == 12)
            {
                if (op == 10)
                {
                    h << a << " raised to power " << b << " is " << result;
                }
                if (op == 12)
                {
                    h << "Average is " << result << endl;
                }
            }
            else
            {
                if (op == 1)
                {
                    opr = '+';
                }
                if (op == 2)
                {
                    opr = '-';
                }
                if (op == 3)
                {
                    opr = 'x';
                }
                if (op == 4)
                {
                    opr = '/';
                }
                h << a << " " << opr << " " << b << " = " << result << endl;
            }
        }
        else
        {
            if (op == 5)
            {
                opr = "Square";
            }
            if (op == 6)
            {
                opr = "Square root";
            }
            if (op == 7)
            {
                opr = "sin";
            }
            if (op == 8)
            {
                opr = "cos";
            }
            if (op == 9)
            {
                opr = "tan";
            }
            if (op == 11)
            {
                opr = "Cube root";
            }
            if (op == 13)
            {
                opr = "Log with base e";
            }
            if (op == 14)
            {
                opr = "Log with base 10";
            }
            if (op == 15)
            {
                opr = "tan inverse";
            }
            if (op == 16)
            {
                opr = "cos inverse";
            }
            if (op == 17)
            {
                opr = "sin inverse";
            }
            h << opr << " of " << a << " is " << result << endl;
        }
        h.close();
        cout << "Do you want to access history? y or n\n";
        cin >> history;
        if (history == 'y' || history == 'Y')
        {
            h.open("History.txt", ios::in);
            while (getline(h, opr))
            {
                cout << opr << endl;
            }
            h.close();
        }
        h.close();
        cout << "Delete history?\n";
        cin >> history;
        if (history == 'y' || history == 'Y')
        {
            int status = remove("History.txt");
        }
        cout << "Do you want to again execute the program?\n";
        cin >> indi;
    }
}
