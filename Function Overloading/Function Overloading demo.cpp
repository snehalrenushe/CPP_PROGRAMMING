#include<conio.h>
#include<iostream>
using namespace std;

class Demo
{
    public:

        void Addition(int a , int b , int c)
        {
            int Add;
            Add = a + b + c;
            cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

            cout << "\n\tAddition of " << a << " , " << b << " and " << c << " is " << Add << "." << endl;

            cout << "\n-------------------------------------------------" << endl;
        }

        void Substraction(float i , float j)
        {
            float Sub;
            Sub = i - j;
            cout << "\n\tSubtraction of " << i << " and " << j << " is " << Sub << "." << endl;

            cout << "\n-------------------------------------------------" << endl;
        }

        void Modulo(int x , int y)
        {
            int Mod;
            Mod = x % y;
            cout << "\n\tModulo of " << x << " and " << y << " is " << Mod << "." << endl;
            cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        }
};

int main()
{
    Demo obj;

    obj.Addition(5 , 10 , 15);
    obj.Substraction(12.8 , 7.2);
    obj.Modulo(500 , 7);

    getch();
    return 0;
}
