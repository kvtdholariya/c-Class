#include <iostream>

using namespace std;

//class without data members or data member functions 
class Person {};

int main() {
	
	Person p1;

	// here - we are printing size of the object using sizeof() inbuilt liabrary function
	cout << "***************************************************" << endl;
	cout << "size of object p1 is : " << sizeof(p1) << endl;

	return 0;
}