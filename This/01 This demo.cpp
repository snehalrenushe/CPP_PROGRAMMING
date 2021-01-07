#include<conio.h>
#include<iostream>
#include<sstream>

using namespace std;

class Person
{
    private:
        string name;
        int age;

    public:
        Person();
        Person(string name,int age);

        string toString();
};

Person::Person()
{
    age = 0;
    name = "";
}

Person::Person(string name,int age)
{
    this->name = name;
    this->age = age;

    cout << "Memory location of object: " << this << endl;

}

string Person::toString()
{
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}

int main()
{
    Person person1;
    Person person2("Bob",42);
    Person person3("Sue",35);

    cout << person2.toString() << "; memory location: " << &person2 << endl;
    cout << person3.toString() << "; memory location: " << &person3 << endl;


    return 0;
}








