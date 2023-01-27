#include <iostream>

using namespace std;
int main ()
{
cout << "Now is the time for all good men" << endl;
cout << "To come to the aid of their party" << endl;
return 0;

  }
  
  #include <iostream>
using namespace std;
int main()
{
int number;
float total;
cout << "Today is a great day for Lab";
cout << endl << "Let's start off by typing a number of your choice" << endl;
cin >> number;
total = number * 2;
cout << total << " is twice the number you typed" << endl;
return 0;
}

#include <iostream>
using namespace std;
int main()
{
float number;
int divider;
divider = 0;
cout << "Hi there" << endl;
cout << "Please input a number and then hit return" << endl;
cin >> number;
number = number / divider;
cout << "Half of your number is " << number << endl;

return 0;
  }
  
  #include <iostream>
using namespace std;
int main()
{
float firstNumber;
float secondNumber;
// Prompt user to enter the first number.
cout << "Enter the first number" << endl;
cout << "Then hit enter" << endl;
cin >> firstNumber;
// Prompt user to enter the second number.
cout << "Enter the second number" << endl;
cout << "Then hit enter" << endl;
cin >> secondNumber;
// Echo print the input.
cout << endl << "You input the numbers as " << firstNumber
<< " and " << secondNumber << endl;
// Now we will swap the values.
firstNumber = secondNumber;
secondNumber = firstNumber;
// Output the values.
cout << "After swapping, the values of the two numbers are "
<< firstNumber << " and " << secondNumber << endl;
return 0;

  }
