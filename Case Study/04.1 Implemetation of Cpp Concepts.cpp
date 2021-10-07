#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

//#define pi 3.14

class Circle
{
    private:
        float Pi;

    public:
        float Radius,Area,Circum;

        Circle();
        Circle(float);
        Circle(Circle &);
        ~Circle();

        void Accept_Details();
        void Area_Of_Circle();
        void Circumference_Of_Circle();
        void Display_Area();
        void Display_Circumference();
};

Circle :: Circle()
{
    cout << "\nInside Default Constructor of Circle.";

    Pi = 3.14;
    Radius = 0.0f;
    Area = 0.0f;
    Circum = 0.0f;
}

Circle :: Circle(float Rad)
{
    cout << "\nInside Parameterized Constructor of Circle.";

    Radius = Rad;
    Pi = 3.14f;
    Area = 0.0f;
    Circum = 0.0f;
}

Circle :: Circle(Circle &Cir)
{
    cout << "\nInside Copy Constructor of Circle.";

    Pi = 3.14;
    Radius = Cir.Radius;
    Area = Cir.Radius;
    Circum = Cir.Radius;
}

void Circle :: Accept_Details()
{
    cout << "\nEnter Radius of Circle : ";
    cin >> Radius;
}

void Circle :: Area_Of_Circle()
{
    Area = Pi * Radius * Radius;
}

void Circle :: Circumference_Of_Circle()
{
    Circum = 2 * Pi * Radius;
}

void Circle :: Display_Area()
{
    cout << "\n Area of Circle => ";
    cout << "\nArea = " <<Area;
    return;
}

void Circle :: Display_Circumference()
{
    cout << "\n Circumference of Circle => ";
    cout << "\nCircum = " <<Circum;
    return;
}


Circle :: ~Circle()
{
    cout << "\nInside Destructor of Circle.";
}

class Rectangle : public Circle
{
    public:
        float len , bre , peri;

        Rectangle();
        Rectangle(float,float);
        Rectangle(Rectangle &);
        ~Rectangle();

        void Accept_Details();
        void Area_Of_Rectangle();
        void Perimeter_Of_Rectangle();
        void Display_Perimeter();
        void Display_Area();
};

Rectangle :: Rectangle()
{
    cout << "\nInside Default Constructor of Rectangle.";

    len = 0.0f;
    bre = 0.0f;
    Area = 0.0f;
    peri = 0.0f;
}

Rectangle :: Rectangle(float l,float b)
{
    cout << "\nInside Parameterized Constructor of Rectangle.";

    len = l;
    bre = b;
    Area = 0.0f;
    peri = 0.0f;
}

Rectangle :: Rectangle(Rectangle &Rect)
{
    cout << "\nInside Copy Constructor of Rectangle.";

    len = Rect.len;
    bre = Rect.bre;
}

void Rectangle :: Accept_Details()
{
    cout << "\nEnter length of Rectangle : ";
    cin >> len;
    cout << "\nEnter breadth of Rectangle : ";
    cin >> bre;

}

void Rectangle :: Area_Of_Rectangle()
{
    Area = len * bre;
}

void Rectangle :: Perimeter_Of_Rectangle()
{
    peri = 2*(len + bre);
}

void Rectangle :: Display_Area()
{
    cout << "\n Area of Rectangle => ";
    cout << "\nArea = " <<Area;
    return;
}

void Rectangle :: Display_Perimeter()
{
    cout << "\n Perimeter of Rectangle => ";
    cout << "\nPerimeter = " << peri;
    return;
}

Rectangle :: ~Rectangle()
{
    cout << "\nInside Destructor of Rectangle.";
}

int main()
{
    Circle cobj1;

    Circle cobj2(5.5);
    Circle cobj3(cobj2);

    Rectangle robj1;
    Rectangle robj2(2,3);
    Rectangle robj3(robj2);

    int choice = 0;
    char ch = '\0';
    int i = 0 , j = 0;

    while(1)
    {
        system("cls");
        cout << "\n Select Your Choice => \n\t 1.Circle \n\t 2.Rectangle  \n\t 3.Exit \n";

        cout << " Enter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                 cout << "\n Select Your Choice => \n\t 1.Area \n\t 2.Circumference  \n\t 3.Exit \n";

                 cout << " Enter Your Choice : ";
                 cin >> i;

                 switch(i)
                 {
                    case 1:
                        cobj1.Accept_Details();
                        cobj1.Area_Of_Circle();
                        cobj1.Display_Area();

                        cout << "\n Press any key to go back to main Menu : ";
                        getch();
                        system("cls");
                        break;

                    case 2:
                        cobj1.Accept_Details();
                        cobj1.Circumference_Of_Circle();
                        cobj1.Display_Circumference();

                        cout << "\n Press any key to go back to main Menu : ";
                        getch();
                        system("cls");
                        break;

                 }

            case 2:
                 cout << "\n Select Your Choice => \n\t 1.Area \n\t 2.Perimeter  \n\t 3.Exit \n";

                 cout << " Enter Your Choice : ";
                 cin >> j;

                 switch(j)
                 {
                    case 1:
                        robj1.Accept_Details();
                        robj1.Area_Of_Rectangle();
                        robj1.Display_Area();

                        cout << "\n Press any key to go back to main Menu : ";
                        getch();
                        system("cls");
                        break;

                    case 2:
                        robj1.Accept_Details();
                        robj1.Perimeter_Of_Rectangle();
                        robj1.Display_Perimeter();

                        cout << "\n Press any key to go back to main Menu : ";
                        getch();
                        system("cls");
                        break;

                 }


            case 3:
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

        if(choice == 3)
         {
             cout << "\n Thanks for using Our Application !!!\n";
             break;
         }
    }

    cout << "\n We are Pleased To Serve You !!!!!! " << flush;

    getch();

    return 0;

}
