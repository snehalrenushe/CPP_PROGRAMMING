#include<conio.h>
#include<iostream>
using namespace std;

class Student                             ///Base class
{
    protected:
    int Roll_No = 0;
    public:
        void Accept_Details(int R_No)
        {
            cout << "\n Roll no of student is : " << R_No << endl;

            Roll_No = R_No;
        }
};

class Student1 : public Student                ///derived class 1
{
    public:
        int Accept_Details1(int R_no)
        {
            Roll_No = R_no;

            return R_no;
        }

};

class Student2 : public Student                 ///derived class 2
{
    public:
        int Accept_Details1(int r_no)
        {
            Roll_No = r_no;

            return r_no;
        }

};

// main function

int main()
{
    Student1 stud1;
    Student2 stud2;

    stud1.Accept_Details(1);
    stud2.Accept_Details(2);

    getch();

    cout << "\n Roll no of Student is : " << stud1.Accept_Details1(3) << endl;
    cout << "\n Roll no of student is : " << stud2.Accept_Details1(4) << endl;

    getch();
    return 0;
}
