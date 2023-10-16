#include <iostream>
using namespace std;

int main()
{
    int length, breath, area, perameter;

    cout << "Enter area of length: ";
    cin >> length;
    cout << "Enter area of breath: ";
    cin >> breath;

    area = length + breath;

    perameter = 2 * (length + breath);

    if (area > perameter)
    {
        cout << "rectangle is greaterthan perameter";
    }

    else
    {
        cout << "peramteris greaterthan area";
    }
    return 0;
}