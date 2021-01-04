#include<conio.h>
#include<iostream>
using namespace std;

class Karad                               ///Base class
{
     public:
         int a,b;

         Karad()
         {
             cout<<"\n Karad :: Constructor..."<<endl;
         }

         ~Karad()
         {
             cout<<"\n Karad :: Constructor..."<<endl;
             cout<<"value =" <<a<<" "<<b;
         }

         void fun()
         {
             cout<<"\n Karad :: fun()..."<<endl;
         }
};

class Pune : public Karad                  ///derived class
{
     public:
               int x,y;

               Pune();
               ~Pune();

               void gun();

};

Pune :: Pune()
{
    cout<<"\n Pune :: Constructor..."<<endl;
}

Pune :: ~Pune()
{
    cout<<"\n Pune :: Destructor..."<<endl;
}

void Pune :: gun()
{
    cout<<"\n Pune :: gun()..."<<endl;
}

// main function

int main()
{
    Karad K1;
    getche();
    Pune P1;
    getche();

    K1.a=15;
    K1.b=21;
    P1.a=50;
    P1.b=100;

    cout<<endl<<sizeof(K1)<<endl;
    cout<<endl<<sizeof(P1)<<endl;

    getch();
    return 0;
}

