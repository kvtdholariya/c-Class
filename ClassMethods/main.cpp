/* Kavita Dholariya
all work is done my me
took refrence from the internet to understand the basic of c++
this program is for how to create class methods in C++ programming languages, how to access class methods with class object
*/

#include <iostream>
using namespace std;

 // created a class definition below
 //Example is a Class
class Example {

    public: //  This is a Access specifier

        //public methods 
       void printText1(); //prototype for the methode
       void printText2(); //prototype for the methode
       void printValue(int value); //prototypr for the methode
    
};
//driver program will starts from here
int main()
{
    
    Example object; //object of class has been created here

    // calling methods
    object.printText1();
    object.printText2();
    object.printValue(17);

    return 0;
}
//methode definition 1 will display as per the below when we call this by object
void Example::printText1()
{
    cout << "*****************************************" << endl
        << "OOP244 CPA seneca semester 2!" << endl;
}
//methode definition 2 will display as per the below, when we call this by object
void Example::printText2()
{
    cout << "*****************************************" << endl;
    cout << "I will be happy to learn OOP244" << endl;
}

//methode definition 3  will take one integer value from the argument and display as per the below, when we call this by object
void Example::printValue(int value)
{
    cout << "*****************************************" << endl;
    cout << "The integer value is : " << value << endl;
}
