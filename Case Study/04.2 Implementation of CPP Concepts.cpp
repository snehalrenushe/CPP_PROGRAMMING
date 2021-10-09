#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

//#define pi 3.14


class Rectangle
{
    public:
        float len , bre , peri , area;

        Rectangle();
        Rectangle(float,float);
        Rectangle(Rectangle &);
        ~Rectangle();

        void Accept_Details();
        void Area_Of_Rectangle();
        void Perimeter_Of_Rectangle();
        void Display();
};

Rectangle :: Rectangle()
{
    cout << "\nInside Default Constructor of Rectangle.";

    len = 0.0f;
    bre = 0.0f;
    area = 0.0f;
    peri = 0.0f;
}

Rectangle :: Rectangle(float l,float b)
{
    cout << "\nInside Parameterized Constructor of Rectangle.";

    len = l;
    bre = b;
    area = 0.0f;
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
    cout << "\n\nEnter length of Rectangle : ";
    cin >> len;
    cout << "\nEnter breadth of Rectangle : ";
    cin >> bre;

}

void Rectangle :: Area_Of_Rectangle()
{
    area = len * bre;
}

void Rectangle :: Perimeter_Of_Rectangle()
{
    peri = 2*(len + bre);
}

void Rectangle :: Display()
{
    cout << "\nArea = " << area;
    cout << "\nPerimeter = " << peri << endl;
    return;
}

Rectangle :: ~Rectangle()
{
    cout << "\nInside Destructor of Rectangle.";
}

class Square : public Rectangle
{
    public:

        Square();
        Square(float);
        Square(Square &);
        ~Square();

        void Accept_Details();
        void Area_Of_Square();
        void Perimeter_Of_Square();
        void Display();
};

Square :: Square()
{
    cout << "\nInside Default Constructor of Square.";

    area = 0.0;
    peri = 0.0;
    len = 0.0;
}

Square :: Square(float l)
{
    cout << "\nInside Parameterized Constructor of Square.";

    len = l;
    area = 0.0;
    peri = 0.0;
}

Square :: Square(Square &sref)
{
    cout << "\nInside Copy Constructor of Square.";

    len = sref.len;
}

void Square :: Accept_Details()
{
    cout << "\n\nEnter side of Square : ";
    cin >> len;
}

void Square :: Area_Of_Square()
{
    area = 2 * len;
}

void Square :: Perimeter_Of_Square()
{
    peri = 4 * len;
}

void Square :: Display()
{
    cout << "\nArea = " << area;
    cout << "\nPerimeter = " << peri << endl;
}

Square :: ~Square()
{
    cout << "\nInside Destructor of Square.";
}
int main()
{
    Rectangle robj1;
    Rectangle robj2(2,2);
    Rectangle robj3(robj2);

    robj1.Accept_Details();
    robj1.Area_Of_Rectangle();
    robj1.Perimeter_Of_Rectangle();
    robj1.Display();

    getch();

    Square sobj1;
    Square sobj2(2);
    Square sobj3(sobj2);

    sobj1.Accept_Details();
    sobj1.Area_Of_Square();
    sobj1.Perimeter_Of_Square();
    sobj1.Display();

    getch();
    return 0;
}
