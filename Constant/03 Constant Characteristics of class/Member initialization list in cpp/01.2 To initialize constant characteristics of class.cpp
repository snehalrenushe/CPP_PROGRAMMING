using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Product
{
    public:
        int N1,N2,N3;

        Product()
        {
            N1 = N2 = N3 = 0;

            cout << "\n Inside Default Constructor !!! " << endl;
        }

        Product(int x) : N2(x++) , N3(x) , N1(++x)        /// Member Initialization list is invoked in order to which characteristics are declared in the class.
        {

            cout << "\n Inside Parameterized Constructor !!!! " << endl;
        }

        ~Product()
        {
            cout << "\n Inside Destructor !!! " << endl;
        }
};

int main()
{
    Product obj1(776);

    cout << "\n Product's of 1st Object value is " << obj1.N1 << " = " << obj1.N2 << " = " << obj1.N3 << endl;

    getch();
    return 0;
}
