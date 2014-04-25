// carrots.cpp  -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots,number;

    carrots = 25;
    cout << "I have ";
    cout << carrots;    //display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  //modify th variable
    cout << "Crunch,crunch.Now I have " << carrots << " carrots." << endl;
    cout << "Please enter a number:";
    cin >> number;
    cout << "What you input is " << number << endl;
    return 0;
}
