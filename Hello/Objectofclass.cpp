/* Kavita Dholariya
all work is done my me
took refrence from the internet to understand the basic of c++
*/

#include <iostream>
#include <string>
using namespace std;


class Student {
public: // Access specifier
    int st_Id;
    string st_Name;
    float st_Per;
};

int main()
{
    // object creation
    Student S;

    //we can Access public attributes and can set the values
    S.st_Id = 17;
    S.st_Name = "Kavita Borad";
    S.st_Per = 98.20f;

    // displaying the values 
    cout << "Student's Roll No.: " << S.st_Id << "\n";
    cout << "Student's Name: " << S.st_Name << "\n";
    cout << "Student's Percentage: " << S.st_Per << "\n";

    return 0;
}