#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

class BankAccount {

	//privade data members
	int principal;
	int no_years;
	float interest_rate;
	float return_val;

public:

	//default constructor
	BankAccount() {
		cout << "Defualt constructor will be called" << endl;
	}

	//constructor with arguments
	BankAccount(int p, int y, float rate); //this construcor for the interest rate float 
	BankAccount(int p, int y, int rate); //this constructor for the interest rate interger
	//public method to display 
	void display(void);
};


//this constructor will initialize the private data members
BankAccount::BankAccount(int p, int y, float rate)
{
	principal = p;
	no_years = y;
	interest_rate = rate;
	return_val = principal;
	//this loop will execute until integer i becomes less the number of years
	for (int i = 0; i < y; i++) {

		return_val = return_val * (1 + interest_rate); //this will calculate the return value of the principal amount
	}

}
BankAccount::BankAccount(int p, int y, int rate) {
	principal = p;
	no_years = y;
	interest_rate = float(rate) / 100;
	return_val = principal;
	//this loop will execute until integer i becomes less the number of years
	for (int i = 0; i < y; i++) {

		return_val = return_val * (1 + interest_rate); //this will calculate the return value of the principal amount
	}

}

void BankAccount::display()
{
	cout << "*****************************************" << endl;
	cout << "The principal amount was:" << principal << endl
		<< "The value after  " << no_years
		<< "years is  " << return_val << endl;
}

int main() {
	BankAccount b1, b2, b3;

	int p, y;
	float rate;
	int Rate;

	cout << "Enter the value of the principal amount  <p>& number of years  <y> of investment and interest rate  <rate>" << endl;
	cin >> p >> y >> rate;
	b1 = BankAccount(p, y, rate);
	b1.display();

	cout << "Enter the value of the principal amount  <p>& number of years  <y> of investment and interest rate  <Rate>" << endl;
	cin >> p >> y >> Rate;
	b2 = BankAccount(p, y, Rate);
	b2.display();

	b3.display();
	return 0;
}


