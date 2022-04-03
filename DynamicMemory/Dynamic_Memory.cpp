#include <iostream>
using namespace std;

class Shop {
	//private data members
	int itemID[100];
	int itemPrice[100];
	int counter;

public:
	//modifiers
	void intCounter() { counter = 0; }
	void setPrice(void);
	void displayPrice(void);

};
//this setter will set the price for the items with thier ID.
void Shop::setPrice(void)
{
		cout << "Enter the ID of the item number :" << counter + 1 << endl;
		cin >> itemID[counter];
		cout << "Enter the price of item number:" << counter + 1 << endl;
		cin >> itemPrice[counter];
		counter++;
}

//this function will display the item price and item ids as per user have inserted.
void Shop::displayPrice(void)
{
	for (int i = 0; i < counter;i++) {
		cout << "-------------------------------------------------------------------" << endl;
		cout << "The price with item ID   " << itemID[i] << " is   " << itemPrice[i] << endl;
	}
}

	

int main() {

	Shop S1;
	S1.intCounter();
	S1.setPrice();
	S1.setPrice();
	S1.setPrice();
	S1.displayPrice();
	return 0;
}

