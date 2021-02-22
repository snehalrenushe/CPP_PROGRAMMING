#include<conio.h>
#include<iostream>
using namespace std;

class A1                             ///Base class
{
     public:
         int a,b;

         A1()       // Constructor
         {
             cout << "\n A1 :: Constructor..." << endl;
         }

         ~A1()      //Destructor
         {
             cout << "\n A1 :: Destructor..." << endl;
             cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
         }

         void fun()     //Member Function
         {
             a = 100;
             b = 200;
             cout << " Value of a and b is : " << a << " " << b << endl;
         }
};

class D1 : public A1                 ///derived class 1
{
     public:
               int x;

               D1()     //Constructor
               {
                   cout << "\n D1 :: Constructor..." << endl;
               }

               ~D1()       //Destructor
               {
                   cout << "\n D1 :: Destructor..." << endl;
               }

               void gun()       //Member Function
               {
                   D1 :: fun();
                   x = 300;
                   cout << "\n Value of x is : " << x << endl;
               }


};

class D2 : public D1                 ///derived class 2
{
     public:
               int i,j;

               D2()     //Constructor
               {
                   cout << "\n D2 :: Constructor..." << endl;
               }

               ~D2()        //Destructor
               {
                   cout << "\n D2 :: Destructor..." << endl;
               }

               void sun()       //Member Function
               {
                   D2 :: gun();
                   i = 400;
                   j = 500;

                   cout << "\n Value of i and j : " << i << " " << j << endl;

                   cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
               }


};

// main function

int main()
{
    D2 obj;     //Object

    cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

    cout << endl << "   Size of given Object is : " << sizeof(obj) << endl;
    getche();

    cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n" << endl;

    obj.sun();

    getch();
    return 0;
}
