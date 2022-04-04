#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

#define MAX 12

//student class
class student{
    //private data members
    char  name[25];
    int   idnum;
    int   totalmarks;
    float percentage;
public:
    //methode  to get student's details
    void getDetails();
    //metohde to print student's details
    void putDetails();
};

//methode definition, outside of the class
void student::getDetails() {
    cout << "Enter the name of the Student :> " << endl;
    cin >> name;
    cout << "Enter the identity number of the Student:>" << endl;
    cin >> idnum;
    cout << "Enter total marks outof 150 :>" << endl;
    cin >> totalmarks;

    percentage = float(totalmarks) / 150 * 100;
}

//metohde definition, outside of the class
void student::putDetails() {
    cout << "Student details as per the user has entered:\n";
    cout << "Name:" << name << endl
    << "Roll Number:" << idnum << endl
    << "Total:" << totalmarks << endl
    << "Percentage:" << percentage << endl;
}

int main()
{
    student std[MAX];       //array of objects creation
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for (i = 0;i < n; i++) {
        cout << "Enter details of student " << i + 1 << ":\n";
        std[i].getDetails();
    }

    cout << endl;

    for (i = 0;i < n; i++) {
        cout << "Details of student " << (i + 1) << ":\n";
        std[i].putDetails();
    }

    return 0;
}