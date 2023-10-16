#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter row:";
    cin >> row;
    cout << "Enter colum";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int i = 1; i <= col; i++)
        {
            cout << "10"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}