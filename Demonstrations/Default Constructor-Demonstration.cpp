using namespace std;
#include<iostream>
#include<conio.h>

class Constructor_Demo
{
    private:
        int x,y;                                       //Private - Data members and characteristics

        void Sun();                                    //Private - Member Function or Behavior - Declaration

    protected:
        int a,b;                                       //Protected - Data members and characteristics

        void Gun();                                    //Protected- Member Function or Behavior - Declaration

    public:
        int i,j;                                       //Public - Data members and characteristics

        void Fun();                                    //Public- Member Function or Behavior - Declaration

        Constructor_Demo()                             //Default Constructor
        {
            i=j=x=y=1580;
            a=b=2020;

            cout<<"\n\nInside Default Constructor of Our Class...";

            //Inside Constructor,We can Call Any Member Function Without Access Specifiers Limitations Because Constructor is Insider of Class can And As a We Know Insider Can Access Any Characteristics/Behaviors of Class

            Fun();
            Sun();
            Gun();

            cout<<"\n\nCharacteristics Values Inside Constructor =>\n i = " << i << " j= " << j << " x= " << x << " y= " << y << " a= " << a << " b= " << b ;
            getch();
        }

        ~Constructor_Demo()                             //Destructor
        {
            cout<<"\n\nInside Destructor of our Class....";
        }
};


//main Function Defination

int main()
{
    Constructor_Demo Obj1,Obj2;                         //Objects created using Default Constructor

    cout<<"\nINSIDE main()!!!!";

    Obj1.Fun();                                         //Public Member function Accessible Outside Class

    //Obj1.Gun();                                       //Protected member Function CAN'T BE Accessible Outside class

    //Obj1.Sun();                                       //private Member Function CAN'T BE Accessible Outside Class

    cout<<"\n\nValues of public Characteristics of Obj1 => \n i = " << Obj1.i <<" j= " << Obj1.j;        //Public characteristics - Accessible Outside Class

    //cout<<"\n\nValues of private Characteristics of Obj1 => \n X = " << Obj1.x << " Y= " << Obj1.y;      //Private characteristics - Accessible Outside Class

    //cout<<"\n\nValues of protected Characteristics of Obj1 => \n A=" << Obj1.a << " B= " << Obj1.b;    //Protected characteristics - Accessible Outside Class

    getch();
    return 0;
}

//Member Function Definitions Outside Class

void Constructor_Demo::Sun()
{
    cout<<"\nInside PRIVATE Sun() function of our class...";
}

void Constructor_Demo::Gun()
{
    cout<<"\nInside PROTECTED Gun() function of our class...";

    a=55;
    b=33;

    x=a+b;
    y=a-b;
}

void Constructor_Demo::Fun()
{
    cout<<"\nInside PUBLIC Fun() function of our class...";

    i=15;
    j=20;

    x=10;
    y=i+j;

    Sun();
}

///Insider of a class (constructor,member function,destructor etc)can access any characteristics or behavior of a class.
///If u do not giving access specifier in the class then everything insider the class is treated as private.
///Constructor and Destructor should be written insider public access specifier.
