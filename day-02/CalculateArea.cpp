# include <iostream>
# include <string>


using namespace std;

int main (){

// declare variables
float length;
float area;
float width;

// calculate area
cout << "Please enter length" << "\n";
cin >> length;
cout << "Please enter width" << "\n";
cin >> width;

//display area
area = length * width;
cout << "the area is " <<  area << "\n";

return 0;

}
