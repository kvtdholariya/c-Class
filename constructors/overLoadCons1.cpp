//The C++ program to demonstrate example of Constructor Overloading
//Kavita Dholariya
//one more example of constructor overloading

#include <iostream>
using namespace std;


class Demo
{
    
private:
    int X{};
    int Y{};

public:
    
    Demo(); //default constructor

   
    Demo(int a, int b); //overloaded constructor
    
    void setData() {

        cout << "*********************************" << endl;
        cout << "Enter the values of the integer X:";cin >> X;
        cout << "Enter the values of the integet Y:"; cin >> Y;
    }
       
    void Display() {

        cout << endl <<  "The values of int X is:" << X << endl;
        cout << endl << "The values of int Y is:" << Y << endl;
    }

};

Demo::Demo()
{
    X = 10;
    Y = 20;
}


Demo::Demo(int a, int b)
{
    X = a;
    Y = b;
}




int main()
{
    Demo d1, d2;
    cout << "Default Constructor: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    d2.setData();
    cout << "Parameterized Constructor or copy constructor will be used here:: " << endl;
    cout << "Values of copy constructor is  : ";
    d2.Display();

    return 0;
}