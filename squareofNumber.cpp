#include <iostream>
using namespace std;

int main()
{
    int square;

    cout << "enetr number: ";
    cin >> square;

    for (int i = 1; i <= square; i++)
    {
        cout << i << "square is" << i * i << endl;
    }
    return 0;
}