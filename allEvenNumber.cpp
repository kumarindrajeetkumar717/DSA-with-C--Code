#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter number: ";
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << " is even" << endl;
    }
    return 0;
}