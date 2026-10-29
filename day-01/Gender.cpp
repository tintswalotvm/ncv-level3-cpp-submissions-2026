// Made with Blocks to c++
#include <iostream>
#include <iostream>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name?" << endl;
   // cin >> name;

    getline (cin >> ws, name);
    cout << "Hello, " << name << endl;
    cout <<"Please Enter you Gender"<<endl;
    // cin >> gender;
    getline (cin >> ws, gender);
       // cout << "What is your gender?" << endl;
    if (gender == "M" || gender == "m" ) {
        cout << "You are a Clever Man" << endl;
    }
            if (gender == "F") {
        cout << "You are a Lovely Lady" << endl;
            }
    return 0;
    }
