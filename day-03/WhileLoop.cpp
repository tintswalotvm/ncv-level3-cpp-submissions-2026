# include <iostream>

using namespace std;

int main()
{
//declaration
int sum=0, num, i=1;
float average;


   //prompt inputs
    while (i <=5)
    {
             cout << " Enter number" << i;
            cin>> num;

        if( num >= 1 && num <= 50)
        {
            sum = sum + num;
             i++;
        }else
            {
             cout << "please enter a number from 1 to 50: ";
            }

    }




   average = sum / 5;

   cout << "the sum of the numbers is: " << sum << "\t"<< average;

 return 0;
}
