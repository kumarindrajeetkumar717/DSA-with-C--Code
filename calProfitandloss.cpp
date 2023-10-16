#include <iostream>
using namespace std;

int main()

{
    int cp, sp, pl = 0;

    cout << "Enter the Cost price: ";
    cin >> cp;

    cout << "Enter Selling price: ";
    cin >> sp;

    pl = sp - cp;

    if (pl > 0)
    {
        cout << "Profit";
    }

    else if (pl < 0)
    {
        cout << "Loss";
    }
    else
    {
        cout << "No Profit and No Loss";
    }

    return 0;
}