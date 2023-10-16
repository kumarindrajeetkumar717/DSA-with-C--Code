#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Positive number";
    }

    else if (num == 0)
    {
        cout << "number is Zero ";
    }
    else
    {
        cout << "Negative Number";
    }

    return 0;
}