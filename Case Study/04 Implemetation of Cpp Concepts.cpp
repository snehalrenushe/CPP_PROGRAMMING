#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

#define pi 3.14

class Rectangle
{
    private:
        int length = 0,breadth = 0;

    public:
        Accept();
        Find_Area();
        Rectangle();
        ~Rectangle();

};

class Square
{
    private:
        int side = 0;

    public:
        Accept();
        Find_Area();
        Square();
        ~Square();
};

class Circle
{
    private:
        int radius = 0;

    public:
        Accept();
        Find_Area();
        Circle();
        ~Circle();
};

class Ellipse
{
    private:
        int rad1 = 0,rad2 = 0;

    public:
        Accept();
        Find_Area();
        Ellipse();
        ~Ellipse();
};

class Triangle
{
    private:
        int base = 0,height = 0;

    public:
        Accept();
        Find_Area();
        Triangle();
        ~Triangle();

};

int Rectangle :: Accept()
{
    cout << " \nEnter the value of length and breadth => ";
    cin >> this->length >> this->breadth;
}

int Rectangle :: Find_Area()
{
     cout << " \nArea of Rectangle  is " << length * breadth;

     return 0;
}

Rectangle  :: Rectangle ()
{
    cout << " \nInside Default Rectangle  Constructor!!!";
}

Rectangle  :: ~Rectangle ()
{
    cout << " \nInside Rectangle Destructor!!!\n";
}

int Square :: Accept()
{
    cout << " \nEnter the value of length => ";
    cin >> this->side;
}

int Square :: Find_Area()
{
     cout << " \nArea of Square is " << side * side;

     return 0;
}

Square :: Square()
{
    cout << " \nInside Default Square Constructor!!!";
}

Square :: ~Square()
{
    cout << " \nInside Square Destructor!!!";
}

int Circle :: Accept()
{
    cout << " \nEnter the value of radius of circle => ";
    cin >> this->radius;
}

int Circle :: Find_Area()
{
     cout << " \nArea of Circle is " << pi * radius * radius;

     return 0;
}

Circle :: Circle()
{
    cout << " \nInside Default Circle Constructor!!!";
}

Circle :: ~Circle()
{
    cout << " \nInside Circle Destructor!!!";
}

int Ellipse :: Accept()
{
    cout << " \nEnter the radius of ellipse => ";
    cin >> this->rad1 >> this->rad2;
}

int Ellipse :: Find_Area()
{
     cout << " \nArea of Ellipse is " << rad1 * rad2 * pi;

     return 0;
}

Ellipse :: Ellipse()
{
    cout << " \nInside Default Ellipse Constructor!!!";
}

Ellipse :: ~Ellipse()
{
    cout << " \nInside Ellipse Destructor!!!";
}

int Triangle :: Accept()
{
    cout << " \nEnter the value of Base and Height => ";
    cin >> this->base >> this->height;
}

int Triangle :: Find_Area()
{
     cout << " \nArea of Triangle is " << (base * height)/2;

     return 0;
}

Triangle :: Triangle()
{
    cout << " \nInside Default Triangle Constructor!!!";
}

Triangle :: ~Triangle()
{
    cout << " \n\nInside Triangle Destructor!!!";
}

int main()
{
    Rectangle obj1;
    Square obj2;
    Circle obj3;
    Ellipse obj4;
    Triangle obj5;

    int choice = 0;
    char ch = '\0';

    while(1)
    {
        system("cls");
        cout << "\n Select Your Choice => \n\t 1.Rechangle \n\t 2.Square \n\t 3.Circle \n\t 4.Ellipse \n\t 5.Triangle \n\t 6.Exit \n";

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
                 obj5.Accept();
                 obj5.Find_Area();

                 cout << "\n\n Press any key to go back to main Menu : ";
                 getch();
                 system("cls");
                 break;



            case 6:
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

        if(choice == 6)
         {
             cout << "\n Thanks for using Our Application !!!\n";
             break;
         }
    }

    cout << "\n We are Pleased To Serve You !!!!!! " << flush;

    getch();

    return 0;
}
