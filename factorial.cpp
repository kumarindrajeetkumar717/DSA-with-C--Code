#include <iostream>
using namespace std;

int main()
{
    int n, i, fact = 1;

    cout << "enter the number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << "*";
        fact = fact * i;
    }
    cout << "\b"
         << "=" << fact << endl;
    return 0;
}