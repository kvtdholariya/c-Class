/*
this c++ class and object code is for Assign values to the private data members without using constructor
I have use this code from the internet and write every singel line in my way

*/


#include <iostream>
#include <string> // we have include string library as we are using string in this programe
using namespace std;

// class definition

class Student {

private: // private access specifier we can not access private attributes of the class outside the scope of the class

    int st_ID;
    string st_Name;
    float st_Percentage;

public: //public access specifier
    
    void set();  //we can initialize the member attributes using this public member function
 
    void printValue();//we can display the values of the  member attributes using this public member function
   
};
//Driver programme 
int main()
{
    // object creation
    Student std;
    //calling function
    std.set();
    std.printValue();
    return 0;
}

void Student::set()
{
    st_ID = 17;
    st_Name = "Kavita";
    st_Percentage = 95;

}

void Student::printValue()
{
    cout << "*****************************************************" << endl;
    cout << "The student ID is:-->" << st_ID << endl;
    cout << "The name of the student is:-->" <<  st_Name<< endl;
    cout << "The percentage of the student is:-->"  << st_Percentage<< endl;
}
