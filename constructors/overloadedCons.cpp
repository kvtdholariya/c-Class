/*Overloaded constructors have the same name (name of the class) but the different number of arguments. Depending upon the number and type of arguments passed, the corresponding constructor is called.*/
//Kavita Dholariya
//overloaded constructors will have same name but different type of arguments

#include <iostream>
using namespace std;

class Person {

private:
    //data member
    int age;

public:
    // 1. Constructor with no arguments is defualt constructor
    Person() {
        age = 20;
    }

    // 2. Constructor with an argument called copy constructor

    Person(int a) {
        age = a;
    }
    int setAge() {

        cout << "Enter the age of the person: "; cin >> age;
        return age;

     }
    int getAge() {
        return age;
    }
};

int main() {
    Person p1, p2;

    cout << "Person1 Age = " << p1.getAge() << endl; //this will call default constructor as we did not pass any values 
    p2.setAge();
    cout << "Person2 Age = " << p2.getAge() << endl; //this will call copy constructor as we have pass interger values as an arguments

    return 0;
}