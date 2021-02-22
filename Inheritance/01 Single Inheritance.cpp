#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int R_no = 0;
        char Name[20];

        student()
        {
            cout << "\n ^^^^^^^^^^^^^ Information of student is given below... ^^^^^^^^^^^^^ " << endl;
        }

        void accept_student_details();
        void display_student_details();

        ~student()
        {
            cout << "\n ^^^^^^^^^ Information of student is successfully displayed ^^^^^^^^^ " << endl;
        }

};

void student :: accept_student_details()
{
    cout << " \n Roll no of student : ";
    cin >> R_no;
    cout << "\n Name of student : ";
    cin >> Name;
}

void student :: display_student_details()
{
    cout << "\n Roll no of student is " << R_no << " . "<< endl;
    cout << "\n Name of student is " << Name << " . " << endl;
}

class Add_student : public student
{
    public:
        char Address[30];
        void add_Accept()
        {
            student :: accept_student_details();
            cout << "\n Enter a address of student : ";
            cin >> Address;
        }

        void add_Display()
        {
            cout << "\n *********************************************" << endl;
            student :: display_student_details();
            cout << "\n Address of student is " << Address << " . " << endl;
        }

};

int main()
{
    Add_student obj;
    obj.add_Accept();
    obj.add_Display();

    getch();
    return 0;
}

