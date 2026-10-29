# include <iostream>

using namespace std;

int main()
{
//declaration
int level;
string description;

//prompt inputs
cout << "enter NCV level: ";
cin >> level;
 //make decision
 switch (level)
 {
 case 1:
    description = " level 1";
    break;

    case 2:
    description = " level 2";
    break;
    default:
        description = " Invalid";
 }

 cout << description;

return 0;
}
