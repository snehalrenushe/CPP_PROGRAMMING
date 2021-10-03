#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

#define pi 3.14

class Area_Rectangle
{
    private:
        int length = 0,breadth = 0;

    public:
        Accept();
        Find_Area();
        Area_Rectangle();
        ~Area_Rectangle();

};

class Area_Square
{
    private:
        int side = 0;

    public:
        Accept();
        Find_Area();
        Area_Square();
        ~Area_Square();
};

class Area_Circle
{
    private:
        int radius = 0;

    public:
        Accept();
        Find_Area();
        Area_Circle();
        ~Area_Circle();
};

class Area_Ellipse
{
    private:
        int rad1 = 0,rad2 = 0;

    public:
        Accept();
        Find_Area();
        Area_Ellipse();
        ~Area_Ellipse();
};

int Area_Rectangle :: Accept()
{
    cout << " \nEnter the value of length and breadth =>";
    cin >> this->length >> this->breadth;
}

int Area_Rectangle :: Find_Area()
{
     cout << " \nArea of rectangle is " << length * breadth;

     return 0;
}

Area_Rectangle :: Area_Rectangle()
{
    cout << " \nInside Default Rectangle Constructor!!!";
}

Area_Rectangle :: ~Area_Rectangle()
{
    cout << " \nInside Rectangle Destructor!!!\n";
}

int Area_Square :: Accept()
{
    cout << " \nEnter the value of length =>";
    cin >> this->side;
}

int Area_Square :: Find_Area()
{
     cout << " \nArea of Square is " << side * side;

     return 0;
}

Area_Square :: Area_Square()
{
    cout << " \nInside Default Square Constructor!!!";
}

Area_Square :: ~Area_Square()
{
    cout << " \nInside Square Destructor!!!";
}

int Area_Circle :: Accept()
{
    cout << " \nEnter the value of radius of circle =>";
    cin >> this->radius;
}

int Area_Circle :: Find_Area()
{
     cout << " \nArea of Circle is " << pi * radius * radius;

     return 0;
}

Area_Circle :: Area_Circle()
{
    cout << " \nInside Default Circle Constructor!!!";
}

Area_Circle :: ~Area_Circle()
{
    cout << " \nInside Circle Destructor!!!";
}

int Area_Ellipse :: Accept()
{
    cout << " \nEnter the radius of ellipse =>";
    cin >> this->rad1 >> this->rad2;
}

int Area_Ellipse :: Find_Area()
{
     cout << " \nArea of Ellipse is " << rad1 * rad2 * pi;

     return 0;
}

Area_Ellipse :: Area_Ellipse()
{
    cout << " \nInside Default Ellipse Constructor!!!";
}

Area_Ellipse :: ~Area_Ellipse()
{
    cout << " \n\nInside Ellipse Destructor!!!";
}


int main()
{
    Area_Rectangle obj1;
    Area_Square obj2;
    Area_Circle obj3;
    Area_Ellipse obj4;

    int choice = 0;
    char ch = '\0';

    while(1)
    {
        system("cls");
        cout << "\n Select Your Choice => \n\t 1.Rechangle \n\t 2.Square \n\t 3.Circle \n\t 4.Ellipse \n\t 5.Exit \n";

        cout << " Enter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                 obj1.Accept();
                 obj1.Find_Area();

                 cout << "\n Press any key to go back to main Menu : ";
                 getch();
                 system("cls");
                 break;

            case 2:
                 obj2.Accept();
                 obj2.Find_Area();

                 cout << "\n\n Press any key to go back to main Menu : ";
                 getch();
                 system("cls");
                 break;

            case 3:
                 obj3.Accept();
                 obj3.Find_Area();

                 cout << "\n\n Press any key to go back to main Menu : ";
                 getch();
                 system("cls");
                 break;

            case 4:
                 obj4.Accept();
                 obj4.Find_Area();

                 cout << "\n\n Press any key to go back to main Menu : ";
                 getch();
                 system("cls");
                 break;

            case 5:
                 fflush(stdin);
                 cout << "\n Are you Sure ??? \n Do You Really Want to Quit (Yes/No) ";
                 ch = getchar();

                 if(ch == 'N' || ch == 'n')
                 {
                      choice = -1;
                      system("cls");
                 }
                 break;

            default:

                  cout << "\n Invalid Choice Please Select Choice Wisely !!! ";
                  cout << "\n Press Any Key To go back to main menu :";
        }

        if(choice == 5)
         {
             cout << "\n Thanks for using Our Application !!!\n";
             break;
         }
    }

    cout << "\n We are Pleased To Serve You !!!!!! " << flush;

    getch();

    return 0;
}
