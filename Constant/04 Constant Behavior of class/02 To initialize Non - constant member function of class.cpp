using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Product
{
    public:
        int N1,N2;
        const int N3;

        Product() : N3(0)
        {
            N1 = N2 = 0;

            cout << "\n Inside Default Constructor !!! " << endl;
        }

        Product(int x) : N3(x)
        {
            N1 = 10 * x;
            N2 = 100 + x;

            cout << "\n Inside Parameterized Constructor !!!! " << endl;
        }

        void Modify() const
        {
            N1 = 7;
            N2 = N2 + N1 + N3;

            cout << "\nInside Non constant Member function Modify !!! " << endl;
        }

        ~Product()
        {
            cout << "\n Inside Destructor !!! " << N3 << endl;
        }
};

int main()
{
    Product obj1(776);

    cout << "\n Product's of 1st Object value is " << obj1.N1 << " = " << obj1.N2 << " = " << obj1.N3 << endl;

    obj1.Modify();

    cout << "\n Product's of 1st Object value is " << obj1.N1 << " = " << obj1.N2 << " = " << obj1.N3 << endl;

    getch();
    return 0;
}
