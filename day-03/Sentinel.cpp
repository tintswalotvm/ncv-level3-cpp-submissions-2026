# include <iostream>

using namespace std;

int main()
{
//declaration
int sum=0, num, i=1;
float average;

   //prompt inputs
    while (num != -1)
    {
             sum = sum + num;
             num++;
{
    cout << "please enter a number" << i +1 << ": ";
}             cin>> num;
}

      average = sum / 5;

   cout << "the sum of the numbers is: " << sum << "\t"<< average;

    return 0;
}
