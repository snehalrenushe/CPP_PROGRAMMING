using namespace std;
#include<stdio.h>
#include<iostream>
#include<conio.h>

class Employee            // Constructor and destructor have same name of class
{
    private:                // Private Access Specifier
            int Emp_ID;
            char Name[15];
            char Address[20];          // Data Member or Characteristics of class
            int Emp_Salary;

    public:                                // Public Access Specifier
           Employee()                               // Default Constructor
           {
               cout << " \n***** INFORMATION ABOUT EMPLOYEE ***** " << endl;
           }

           void Accept_Employee_Details();          // Declaration of Member function or Behavior of class
           void Display_Employee_Details();         // Declaration of Member function or Behavior of class

           Employee(int E_ID,int E_Sal)       // Parameterized Constructor
           {
               Emp_ID = E_ID;
               Emp_Salary = E_Sal;

               cout << "\nInside Parameterized Constructor !!!!!!!!!" << endl;
           }

           Employee(Employee &obj)              // Copy Constructor
           {
               Emp_ID = obj.Emp_ID;
               Emp_Salary = obj.Emp_Salary;

               cout << " \nInside Copy Constructor !!!!!!!!!!" << endl;
           }

           ~Employee()           // Destructor (will destroy bottom to top Approch)
           {
               cout << " *****Successfully Displaying information about Employee *****" << endl;
           }
};


void Employee::Accept_Employee_Details()       // Definition of Member function or Behavior of class
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

void Employee::Display_Employee_Details()       // Definition of Member function or Behavior of class
{
    cout << "===================================================" << endl;
    cout << " ID of Employee is " << Emp_ID << "." << endl;
    cout << " Name of Employee is " << Name << "." << endl;
    cout << " Address of Employee is " << Address << "." << endl;
    cout << " Salary of Employee is " << Emp_Salary << "." << endl;
}

int main()
{
    int EiD,ESal;

    Employee E;          // Default Constructor Object

    getche();

    Employee E1(EiD,ESal);         // Parameterized Constructor Object

    getch();

    Employee E2(E1);                  // Copy Constructor Object

    getche();

    E.Accept_Employee_Details();
    E.Display_Employee_Details();

    cout << "\n****************************************************" << endl;

    cout << " \nBACK TO MAIN !!!!!" << endl << endl;

    getch();
    return 0;

}


