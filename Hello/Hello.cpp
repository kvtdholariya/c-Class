/* Kavita Dholariya
all work is done my me
took refrence from the internet to understand the basic of c++
*/

#include  <iostream>
using namespace std;

//when we create a  any class all data members are private unless we declare them to public:

class Hello{

public:

    void displayHello(void){
    
        cout << "Hello World! " << endl
            << "My name is Kavita" << endl
            << "Studying CPA from the Seneca College" << endl;
    }
};

int main()
{
    Hello hello;
    hello.displayHello();
    return 0;
}