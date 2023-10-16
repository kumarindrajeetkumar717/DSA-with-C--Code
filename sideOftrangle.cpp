#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 1st side of trangle:";
    cin >> a;
    cout << "Enter 2st side of trangle:";
    cin >> b;
    cout << "Enter 3st side of trangle:";
    cin >> c;

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {

        cout << "Valid trangle";
    }
    else
    {

        cout << " Invalid trangle";
    }
    return 0;
}