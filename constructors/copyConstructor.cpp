/* This C++ program will myClassnstrate an example of Copy Constructor.*/
//Kavita Dholariya
//this code is for my better understanding of constructor and copy constructor


#include <iostream>
using namespace std;

class myClass
{
   
private:
    //class attributes integer type
    int X{};
    int Y{};

    //Public access specifiers of member function to access data members.
public:
    //Declaration of parameterized constructor to initialize data members of this class


    myClass(int a, int b);
    //Declaration of copy constructor to initialize data members of this 

    /*A copy constructor is a method or member function which initialize an object using another object within the same class”. definition from the google*/
    myClass(const myClass& d);
    
    void    Display();

};//End of class

//Definition of parameterized constructor.
myClass::myClass(int a, int b)
{
    X = a;
    Y = b;
}

//Definition of copy constructor 
//we are passing the address of the object of class myClass 
myClass::myClass(const myClass& d)
{
    X = d.X;
    Y = d.Y;
}


//Definition of Display () member function. this will simply display the values of the X and Y
void myClass::Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}

int main()
{
    myClass d1(15, 30); //The constructor will automatically call when we create an object

    //Display value of data member.
    cout << endl << "***The Object: 1 *** " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    //Intialize object with other object using copy constructor
    myClass d2 = myClass(d1);//also write like this :myClass d2(d1);

    //Display value of data member.
    cout << endl << "***The Object: 2 *** " << endl;
    cout << "Value after initialization : ";
    d2.Display();

    return 0;
}
