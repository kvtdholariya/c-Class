//Kavita Dholariya
//This code is for static data copy 
#include <iostream>
#include <string.h>
using namespace std;

class Message
{
private:
	char mess[50]; //array of size [50]
	//static data member to count the objects
	static int count;

public:
	//constructor
	Message()
	{
		count++; //increment after each object will created
	}

	//member function to initialise message
	void initMessage(char s[])
	{
		strcpy(str, s); //copy the string into the str
	}

	//member function to print message
	void printMessage(void)
	{
		cout << str << endl; //prints the string into the display
	}

	//static member function
	static int totalObjects(void)
	{
		return count; //this will return the total count of ojbects
	}
};

//initialise static member function
int Message::count = 0;

//main function
int main()
{
	Message M1;
	Message M2;
	Message M3;

	M1.initMessage("This is Message one");
	M2.initMessage("This is Message two");
	M3.initMessage("This is Message three");

	M1.printMessage();
	M2.printMessage();
	M3.printMessage();

	//printing object count 
	cout << "Total objects created: " << Message::totalObjects() << endl;

	return 0;
}
