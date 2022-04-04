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
    Student S1, S2, S3;

    //we can Access public attributes and can set the values
    S1.st_Id = 17;
    S1.st_Name = "Kavita Borad";
    S1.st_Per = 95.20f;

    S2.st_Id = 18;
    S2.st_Name = "Kavita Dholariya";
    S2.st_Per = 99.20f;

    S3.st_Id = 19;
    S3.st_Name = "Sagar Borad";
    S3.st_Per = 96.20f;

    // displaying the values 
    cout << "Student's Roll No.: " << S1.st_Id << "\n";
    cout << "Student's Name: " << S1.st_Name << "\n";
    cout << "Student's Percentage: " << S1.st_Per << "\n";

    cout << "Student's Roll No.: " << S2.st_Id << "\n";
    cout << "Student's Name: " << S2.st_Name << "\n";
    cout << "Student's Percentage: " << S2.st_Per << "\n";

    cout << "Student's Roll No.: " << S3.st_Id << "\n";
    cout << "Student's Name: " << S3.st_Name << "\n";
    cout << "Student's Percentage: " << S3.st_Per << "\n";

    return 0;
}