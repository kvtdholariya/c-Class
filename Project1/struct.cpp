#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

struct  Person{
	char name[51];
	int age;
};
void setPersonName(Person* P, const char* name) {

	strcpy(P->name, name); 
}
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

	cout << "Enter the name of the person:";  cin >> name;
	setPersonName(&P, name);
	cout << "Enter the age of the person:";cin >> age;
	setPersonAge(&P, age);
	displayPerson(&P);
	return 0;

}
