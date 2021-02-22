#include<iostream>
#include<conio.h>
using namespace std;

class sem_1             ///Base Class 2
{
    public:
        int m1 = 0 , m2 = 0;

        sem_1()         //Constructor
        {
            cout << "\n ^^^^^^^^^^^^^ Information of Marks is given below... ^^^^^^^^^^^^^ " << endl;
        }

        void Accept_Marks1();       //Declaration of Member Function
        void Display_Marks1();      //Declaration of Member Function

        ~sem_1()        //Destructor
        {
            cout << "\n ^^^^^^^^^ Information of Marks is successfully displayed ^^^^^^^^^ " << endl;
        }

};

void sem_1 :: Accept_Marks1()       //Definition of Member Function
{
    cout << " \n Marks of First Subject : ";
    cin >> m1;
    cout << "\n Marks of Second Subject : ";
    cin >> m2;
}

void sem_1 :: Display_Marks1()      //Definition of Member Function
{
    getche();
    cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;

    cout << "\n Marks of First Subject is " << m1 << " . "<< endl;
    cout << "\n Marks of First Subject is " << m2 << " . " << endl;
}

class sem_2             ///Base class 2
{
    public:
        int m3 = 0 , m4 = 0;

        void Accept_Marks2();       //Declaration of Member Function
        void Display_Marks2();      //Declaration of Member Function
};

void sem_2 :: Accept_Marks2()           //Definition of Member Function
{
    cout << " \n Marks of Third Subject : ";
    cin >> m3;
    cout << "\n Marks of Forth Subject : ";
    cin >> m4;
}

void sem_2 :: Display_Marks2()      //Definition of Member Function
{
    cout << "\n Marks of Third Subject is " << m3 << " . "<< endl;
    cout << "\n Marks of Forth Subject is " << m4 << " . " << endl;
}

class result : public sem_1,public sem_2        ///Derived Class
{
    public:
            float total = 0.0 , per = 0.0;

            void Accept_Result()        //Member Function
            {
                sem_1 :: Accept_Marks1();
                sem_2 :: Accept_Marks2();

                total = m1 + m2 + m3 + m4;
                per = total / 4;
            }

            void Display_Result()       //Member Function
            {
                sem_1 :: Display_Marks1();
                sem_2 :: Display_Marks2();


                getch();

                cout << "\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl;

                cout << "\n Total Marks of given Subject => " << total << endl;
                cout << "\n Percentage of given Subject => " << per << endl;
            }

};

//Main Function
int main()
{
    result obj;     //Object

    obj.Accept_Result();
    obj.Display_Result();

    getch();
    return 0;
}

