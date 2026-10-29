# include <iostream>
# include <string>
using namespace std;

int main (){
//declare variables
/*
syntax: datatype nameOfVariables;
*/

//declare variables
int timeInMinutes,hours, mins;

//prompt nd get input
cout << "plese enter time in minutes\n ";
cin >> timeInMinutes;

hours = timeInMinutes/60;
mins = timeInMinutes % 60;

//display
cout << hours << ":hrs " << "minutes" << "\n";

return 0;
}
