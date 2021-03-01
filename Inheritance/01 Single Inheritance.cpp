#include<iostream>
#include<conio.h>
using namespace std;

class student       ///Base class
{
    public:
        int R_no = 0;
        char Name[20];

        void accept_student_details();      //Declaration of Member function
        void display_student_details();     //Declaration Member function

};

void student :: accept_student_details()        //Definition of Member function
{
    cout << " \n Roll no of student : ";
    cin >> R_no;
    cout << "\n Name of student : ";
    cin >> Name;
}

void student :: display_student_details()       //Definition of Member function
{
    cout << "\n Roll no of student is " << R_no << " . "<< endl;
    cout << "\n Name of student is " << Name << " . " << endl;
}

class Add_student : public student      ///Derived class
{
    public:
        char Address[30];
        void add_Accept()       //Definition of member function
        {
            student :: accept_student_details();
            cout << "\n Enter a address of student : ";
            cin >> Address;
        }

        void add_Display()       //Definition of member function
        {
            cout << "\n *********************************************" << endl;

            student :: display_student_details();
            cout << "\n Address of student is " << Address << " . " << endl;

            cout << "\n *********************************************" << endl;
        }

};
//main function
int main()
{
    Add_student obj;    //object
    obj.add_Accept();
    obj.add_Display();

    getch();
    return 0;
}

