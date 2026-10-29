# include <iostream>

using namespace std;

int main()
{
//declaration
int sum, num, i;
float average;

for (i = 1; i <=5; i++)
{

    cout << " Enter number" << i;

  //prompt inputs

cin>> num;

if( num >= 1 && num <= 50)

    sum = sum + num;
else
{
 cout << "please enter a number from 1 to 50: ";
}
}
   average = sum / 5;
   cout << "the sum of the numbers is: " << average;

 return 0;
}
