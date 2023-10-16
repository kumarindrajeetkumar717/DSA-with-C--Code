#include <iostream>
using namespace std;

int main()
{
    int num, i, flag = 0;

    cout << "Enter number to check Prime or not :";
    cin >> num;

    for (i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            flag = 1;
        }
        if (flag == 0)
        {
            cout << "Prime number";
        }

        else
        {
            cout << "Not Prime number";
        }
        return 0;
    }
}