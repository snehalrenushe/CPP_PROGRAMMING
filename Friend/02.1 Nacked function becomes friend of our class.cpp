#include<iostream>
#include<conio.h>
using namespace std;

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

            cout << "\n Inside Default Constructor!!! " << endl;
        }

        ~calculator()               //destructor
        {
            cout << "\n Inside Destructor!!! " << endl;
        }

        friend void operate(int , int);         /// Definition friend Non-Member function

};

void operate(int No1 , int No2)         /// Naked function
{
    calculator obj;

    obj.N1 = No1;
    obj.N2 = No2;

    obj.Addition();

    cout << "\n Addition of given two numbers are = " << obj.sum << endl;

    obj.substraction();

    cout << "\n Substraction of given two numbers are = " << obj.sub << endl;

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

    cin >> Num1;
    cin >> Num2;

    operate(Num1,Num2);

    getch();

    cout << "\n Back to Main() !!!! " << endl;

    getch();
    return 0;
}
