# include <iostream>
using namespace std;
int main ()
{
    //declare variables
int num1,num2;
string message  = "not even";

// prompt and get inputs
cout << "please enter num1: ";
cin>> num1;
cout << "please enter num1: ";
cin>> num1;

// make and decision
if (num1 % 2 == 0 && num2 % 2 == 0)
{
    message = "even";
}
cout << message;
    return 0;
}



