/*This code is taken from the professor Fardad Seneca college OOP244 /NBB /NOTES */
#include <iostream>
using namespace std;

int main(){
	int num;
	int* val{}; //we should always keep unused pointer null always. which is good practice of codeing
	int i;

	cout << "Enter the number of integer that you need for values:" << endl;
	cin >> num;
	val = new int[num]; //we have initialize the memory to val using new keyword

	//this will promt one time to get the values from the user
	cout << " Enter the values :"  << endl;
	for (int i = 0;i < num;i++) {
		//this will promt to get the integer values from the user for the num of times
		cout << i + 1 << ">";
		//this will extract the values in index of val
		cin >> val[i];
	}
	//this for loop will print val index and values
	for (i = num - 1;i >= 0;i--) {
		cout << "**************************" << endl;
		cout << "The values at index number  "  <<i + 1 << "  is :>" << val[i] << endl;
	}
	//this will delete the val pointer
	//this will prevent the memory leaks 
	delete[] val;
	return 0;
}