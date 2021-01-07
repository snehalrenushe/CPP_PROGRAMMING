using namespace std;
#include<stdio.h>
#include<iostream>
#include<conio.h>

class Employee
{
    int Emp_ID;
    char Name[15];
    char Address[20];
    int Emp_Salary;

    public:
           Employee()
           {
               cout << " \n***** INFORMATION ABOUT EMPLOYEE ***** " << endl;
           }

           void Accept_Employee_Details();
           void Display_Employee_Details();

           Employee(int E_ID,int E_Sal)
           {
               Emp_ID = E_ID;
               Emp_Salary = E_Sal;

               cout << "\nInside Parameterized Constructor !!!!!!!!!" << endl;
           }

           Employee(Employee &obj)
           {
               Emp_ID = obj.Emp_ID;
               Emp_Salary = obj.Emp_Salary;

               cout << " \nInside Copy Constructor !!!!!!!!!!" << endl;
           }

           ~Employee()
           {
               cout << " *****Successfully Displaying information about Employee *****" << endl;
           }
};


void Employee::Accept_Employee_Details()
{
    cout << "\nEnter Employee ID :" << endl;
    cin >> Emp_ID;
    cout << "Enter Name of Employee :" << endl;
    cin >> Name;
    cout << "Enter Address of Employee : " << endl;
    cin >> Address;
    cout << "Enter Salary of Employee :" << endl;
    cin >> Emp_Salary;
}

void Employee::Display_Employee_Details()
{
    cout << "===================================================" << endl;
    cout << " ID of Employee is " << Emp_ID << "." << endl;
    cout << " Name of Employee is " << Name << "." << endl;
    cout << " Address of Employee is " << Address << "." << endl;
    cout << " Salary of Employee is " << Emp_Salary << "." << endl;
}

int main()
{
    int E_ID,E_Sal;

    Employee E;

    getche();

    Employee E1(E_ID,E_Sal);

    getch();

    Employee E2(E1);

    getche();

    E.Accept_Employee_Details();
    E.Display_Employee_Details();

    cout << "\n****************************************************" << endl;

    cout << " \nBACK TO MAIN !!!!!" << endl << endl;

    getch();
    return 0;

}


