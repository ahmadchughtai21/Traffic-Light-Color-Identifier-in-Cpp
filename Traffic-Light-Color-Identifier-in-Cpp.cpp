#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter first letter of traffic light's color: ";
    cin >> a;

    if (a == 'r' || a == 'R')
    {
        cout << "The Traffic lights's color is Red";
    }
    else if (a == 'y' || a == 'Y')
    {
        cout << "The Traffic lights's color is Yellow";
    }
    else if (a == 'g' || a == 'G')
    {
        cout << "The Traffic lights's color is Green";
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}