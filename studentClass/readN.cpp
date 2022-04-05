/*Kavita Dholariya
This program is written and implement by me. using reference from the internet
This is C++ program to create student class, read and print N student's details Example of array of objects*/


#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

#define MAX 10

class student
{
//data members of class are private by default

    char  name[30];
    int   rollNo;
    int   total;
    float perc;

public:
    //member function to get student's details
    void getStudent();
    //member function to print student's details
    void display();
};

//member function definition, outside of the class
void student::getStudent() {
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the ID  number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;

    perc = float(total) / 500 * 100;
}

//member function definition, outside of the class
void student::display() {
    cout << "Student details:\n";
    cout << "Name: " << name << ", Roll Number: " << rollNo << ", Total: " << total << ", Percentage: " << perc << endl;
}

int main()
{
    student s[MAX];       //array of objects creation
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;
    //this for loop will get details of the student n number of times 
    for (i = 0;i < n; i++) {
        cout << "*********************************************" << endl;
        cout << "Enter details of student " << i + 1 << ":\n";
        s[i].getStudent();
    }

    cout << endl;
    //this for loop will display the details of the student n number of times
    for (i = 0;i < n; i++) {
        cout << "**********************************************" << endl;
        cout << "Details of student " << (i + 1) << ":\n";
        s[i].display();
    }

    return 0;
}