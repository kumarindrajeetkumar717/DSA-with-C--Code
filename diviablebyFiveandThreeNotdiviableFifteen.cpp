#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number for dividable by 5 or 3 and not divisable by 15: ";
    cin >> num;

    if ((num % 5 == 0 || num % 3 == 0) && (num % 15 != 0))
    {
        cout << num << " is divisiable by 5 or 3 not divisable by 15 ";
    }
    else
    {
        cout << "Not divisiable by 3 or 5 ";
    }
}