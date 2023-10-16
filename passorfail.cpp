#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter Mark check pass or fail:";
    cin >> mark;

    if (mark >= 30)
    {
        cout << "Pass";
    }
    else
    {
        cout << "fail";
    }
    return 0;
}