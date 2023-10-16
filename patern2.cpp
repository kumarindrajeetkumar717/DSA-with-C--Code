#include <iostream>
using namespace std;

int main()
{
    int row, col, num = 1;

    cout << "Enter row:";
    cin >> row;
    cout << "Enter col:";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int i = 1; i < col; i++)
        {
            cout << num << " ";
        }
        cout << endl;
        num++;
    }

    return 0;
}