//In this program we will learn to create default constructor or no argument constructor program in c++ programming language.
//Kavita Dholariya
//This program is ref from the default help.com

/*C++ program to demonstrate example of Default Constructor or No argument.*/


#include <iostream>
using namespace std;

//Class declaration.
class myclass
{
    //Private block  to declare data member( X,Y ) of integer type.
private:
    int X{};
    int Y{};

    //Public block of member function to access data members.
public:
    //Declaration of default or no argument constructor to initialize data members.
    myclass();
    //To take input from user.
    void    Input();
    //To display output onn screen.
    void    Display();

};//End of class

//Definition of constructor.
myclass::myclass()
{
    X = 0;
    Y = 0;
}

//Definition of Input() member function.
void myclass::Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}


//Definition of Display() member function.
void myclass::Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}

int main()
{
    myclass d; //The constructor will autometically call when object is created

    //Display value of data member
    cout << endl << "Method 1 ***: " << endl;
    cout << "Value after initialization : ";
    d.Display();

    d.Input();
    cout << endl;
    cout << "The values after User Input is : " << endl;
    d.Display();


    //We can also create object like this
    myclass d1 = myclass();

    //Display value of data member.
    cout << endl << "Method 2 ***: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    d1.Input();
    cout << endl;
    cout << "The values after User Input is:" << endl;
    d1.Display();

    return 0;
}