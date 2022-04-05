/*Kavita Dholariya
C++ program to demonstrate example of Parameterized Constructor.
this program will demostrate the constructor with parameters
will pass the arguments when object will be created
*/

#include <iostream>
using namespace std;

//Class declaration.
class myClass
{
    //Private block  to declare data member( X,Y ) of integer type.
private:
    int X;
    int Y;

    //Public block of member function to access data members.
public:
    //Declaration of perameterized constructor to initailize data members.
    myClass(int a, int b);
    //To take input from user.
    void    Input();
    //To display output onn screen.
    void    Display();

    /*int add(int,int);*/
};//End of class

//Definition of constructor.
myClass::myClass(int a, int b)
{
    X = a;
    Y = b;
}

//Definition of Input() member function.
void myClass::Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}

//int myClass::add(int a, int y) {
//
//    return X + Y;
//
//}
//Definition of Display() member function.
void myClass::Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
    cout << "The sum of the X and Y is:  >" << X + Y << endl;
}

int main()
{
    myClass c(12,13); //The constructor will autometically call when object is created.

    //Display value of data member
    cout << endl << "****Method 1****: " << endl;
    cout << "Value after initialization: ";
    c.Display();
   /* c.add(12,13);*/
    c.Display();

    c.Input();
    cout << "The Value after User Input : ";
    c.Display();


    //We can also create object like this
    myClass d1 = myClass(10, 20);

    //Display value of data member.
    cout << endl << "****Method 2****: " << endl;
    cout << "The Value after initialization: ";
    d1.Display();

    return 0;
}