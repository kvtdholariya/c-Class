//Kavita Dholariya
//This is person abstract inforamation structor

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

struct  Person{
	char name[51];
	int age;
};
//This function will copy the name of student to the address of the name variable of the struct Person.
void setPersonName(Person* P, const char* name) {

	strcpy(P->name, name); 
}
//This function will take integer age an argument and set this value to the address of person age.
void setPersonAge(Person* P, int age) {

	P->age = age;

}
void displayPerson(const Person* P) {

	cout << "******************************************" << endl;
	cout << "NAME: of the person is:  " << P->name << endl << "AGE of the person is:  " << P->age;
}

int main() {

	Person P;
	char name[51];
	int age;
	//promt for the user input and extract name in to the name 
	cout << "Enter the name of the person:";  cin >> name;
	setPersonName(&P, name);
	//promt for the user input and extract age in to the age
	cout << "Enter the age of the person:";cin >> age;
	setPersonAge(&P, age);
	displayPerson(&P);
	return 0;

}
