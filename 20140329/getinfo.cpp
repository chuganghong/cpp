//getinfo.cpp -- input and output
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;     //c++ input
    cout << "Here are two more.";
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have ";
    cout << carrots << " carrots." << endl;
    return 0;
}
