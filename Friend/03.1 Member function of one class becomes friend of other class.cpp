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

         void operate(int No1 , int No2);         /// Naked function
};

class calculator
{
    private:                                            //private access specifier
        int sum , mult;

        void Addition()                 //Member function
        {
            sum = N1 + N2;
        }

        void Multiplication()
        {
            mult = N1 * N2;
        }

    protected:              //protected access specifier
        int sub , div , mod;

        void substraction()         // member function
        {
            sub = N1 - N2;
        }

        void division()
        {
            div = N1 / N2;
        }

        void modulo()
        {
            mod = N1 % N2;
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

        friend void Arithmatic :: operate(int , int);         /// Declaration Friend To Member function of another class

};

void Arithmatic :: operate(int Num1,int Num2)
{
            calculator obj;

            obj.N1 = Num1;
            obj.N2 = Num2;

            obj.Addition();

            cout << "\n Addition of given two numbers are = " << obj.sum << endl;

            obj.substraction();

            cout << "\n Subtraction of given two numbers are = " << obj.sub << endl;

            obj.division();

            cout << "\n Division of given two numbers are = " << obj.div << endl;

            obj.Multiplication();

            cout << "\n Multiplication of given two numbers are = " << obj.mult << endl;

            obj.modulo();

            cout << "\n Modulo of given two numbers are = " << obj.mod << endl;

}

int main()
{
    int Num1 = 0 , Num2  = 0;
    cout << "\n Enter Two numbers: ";

    cin >> Num1 >> Num2;

    Arithmatic Arith;

    Arith.operate(Num1,Num2);

    getch();

    cout << "\n Back to Main() !!!! " << endl;

    getch();
    return 0;
}
