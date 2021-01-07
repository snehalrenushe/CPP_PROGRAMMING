using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>

class student
{
    public:

        student()
        {
            cout << "*****Information about student : *****" << endl;
        }

        void Accept_Details();
        void Display_Details();

        ~student()
        {
            cout << " \n We Successfully Displaying student information" << endl;
        }

        student(int rno,long int mno)
        {
            roll_no = rno;
            mob_no = mno;
        }

        student(student &stud)
        {
            roll_no = stud.roll_no;
            mob_no = stud.mob_no;
        }

    private:
        char add[20];
        unsigned int mob_no = 0;
        int roll_no = 0;
        char stud_name[10];

};


void student::Accept_Details()
{
            cout << "Enter a Roll no of student : " << endl;
            cin >> roll_no;
            cout << "Enter a Name of student :" << endl;
            cin >> stud_name;
            cout << "Enter a Address of student:" << endl;
            cin >> add;
            cout << "Enter a Mobile no of student :" << endl;
            cin >> mob_no;
            getch();

}

void student::Display_Details()
        {
            cout << "=====================================================" << endl;
            cout << "Roll no => " << roll_no << endl;
            cout << "Name => " << stud_name << endl;
            cout << "Address => " << add << endl;
            cout << "Mobile number => " << mob_no << endl;
        }

int main()
{
    int roll_no = 0;
    unsigned int mob_no = 0;

    student s;
    student s1(roll_no,mob_no);
    student s2(s1);

    s.Accept_Details();
    s.Display_Details();


    getch();
    return 0;
}
