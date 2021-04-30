#include<iostream>
#include<conio.h>
using namespace std;

class Arithmatic
{
    public:

         Arithmatic()
         {
             cout << "\n Inside Arithmatic Default Constructor!!!! " << endl;
         }

         ~Arithmatic()
         {
             cout << "\n Inside Arithmatic Destructor !!! " << endl;
         }

         void Generate_sum(int,int);         /// Naked function

         void Generate_sub(int,int);
};

class calculator
{
    private:                                            //private access specifier
        int sum;

        void Addition()                 //Member function
        {
            sum = N1 + N2;
        }

    protected:              //protected access specifier
        int sub;

        void substraction()         // member function
        {
            sub = N1 - N2;
        }

    public:             // public access specifier
        int N1 , N2;

        calculator()            // default constructor
        {
            N1 = N2 = sum = sub = 0;

            cout << "\n Inside calculator Default Constructor!!! " << endl;
        }

        ~calculator()               //destructor
        {
            cout << "\n Inside calculator Destructor!!! " << endl;
        }

        friend class Arithmatic;         /// Declaration another whole class of our class

};

void Arithmatic :: Generate_sum(int Num1,int Num2)
{
            calculator obj;

            obj.N1 = Num1;
            obj.N2 = Num2;

            obj.Addition();

            cout << "\n Addition of given two numbers are = " << obj.sum << endl;

            cout << "\n Successfully Displayed Addition ...... " << endl;

            getch();

}

void Arithmatic :: Generate_sub(int Num1,int Num2)
{
            calculator obj;

            obj.N1 = Num1;
            obj.N2 = Num2;

            obj.substraction();

            cout << "\n Subtraction of given two numbers are = " << obj.sub << endl;

            cout << "\n Successfully Displayed Substraction ...... " << endl;

            getch();
}

int main()
{
    int No1 = 0 , No2  = 0;
    cout << "\n Enter Two numbers: ";

    cin >> No1 >> No2;

    Arithmatic Arith;

    Arith.Generate_sum(No1,No2);

    getch();

    Arith.Generate_sub(No1,No2);

    cout << "\n Back to Main() !!!! " << endl;

    getch();
    return 0;
}
