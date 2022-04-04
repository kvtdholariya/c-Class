/*C++ | Create a class with setter and getter methods*/

#include <iostream>
using namespace std;

//createing a class defination

class Decimals{

	float fx;
	float fy;

public: //Access specifire
	void setFloat(float, float);
	float getFloatx();
	float getFloaty();

};

//setter will set the values for the data member variables
void Decimals::setFloat(float X, float Y) {

	fx = X;
	fy = Y;
}
//getter will return the values 
float Decimals::getFloatx()
{
	return fx;
}
//getter will return the values 
float Decimals::getFloaty()
{
	return fy;
}

int main() {

	Decimals D1;
	D1.setFloat(15.0f, 16.0f);
	cout << "The value of float x is :" << D1.getFloatx() << " and Y is :" << D1.getFloaty() << endl;

	D1.setFloat(50.0f, 51.0f);
	cout << "The value of float x is :" << D1.getFloatx() << " and Y is :" << D1.getFloaty() << endl;

	return 0;
}





