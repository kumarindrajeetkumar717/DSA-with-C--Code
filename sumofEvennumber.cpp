#include <iostream>
using namespace std;

int main()
{
    int num, sumofeven = 0;

    cout << "enter number";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            sumofeven = sumofeven + i;
        }
    }

    cout << " sum of even number :" << sumofeven << endl;
    return 0;
}
