# include <iostream>

using namespace std;

int main()
{
//declaration
char genderCode;
string description;

//prompt inputs
cout << "please enter gender Code (M= male / F= Female): ";
cin>> genderCode;

//make and decision
if(genderCode == 'F'||genderCode =='f')
{
    description = "Female";
}
else

    if(genderCode == 'M' ||genderCode=='m')
    {
        description = "male";
    }
    else
    {
        description = "Invalid gender";
    }

cout << description;

return 0;
}
