using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Product
{
    public:
        int N1,N2,N3;

        Product() : N1(0) , N2(10)
        {
            N3 = 0;

            cout << "\n Inside Default Constructor !!! " << endl;
        }

        Product(int a , int b) : N1(a) , N2(b)
        {
            N1 = 1340;
            N3 = 788;

            cout << "\n Inside Parameterized Constructor !!!! " << endl;
        }

        ~Product()
        {
            cout << "\n Inside Destructor !!! " << endl;
        }
};

int main()
{
    Product obj1;
    Product obj2(33 , 54);

    cout << "\n Product's of 1st Object value is " << obj1.N1 << " = " << obj1.N2 << " = " << obj1.N3 << endl;

    cout << "\n Product's of 2nd Object value is " << obj2.N1 << " = " << obj2.N2 << " = " << obj2.N3 << endl;

    getch();
    return 0;
}
