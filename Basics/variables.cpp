#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int count_dogs = 5;
    int count_cats = 4;
    int Total_animals = count_dogs + count_cats;

    cout << "Number of given Dogs are : " << count_dogs << endl;

    cout << "Number of given Dogs are : " << count_cats << endl;

    cout << "Total number of Animal is => " << Total_animals << endl;

    cout << "New dog acquired..." << endl;

    Total_animals = count_dogs + 1;

    cout << "Now,new count of dogs are : " << Total_animals << endl;

    getch();

    return 0;

}
