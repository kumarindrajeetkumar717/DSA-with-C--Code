#include <iostream>
using namespace std;

int main()
{
    int Grade;

    cout << "Enter the Mark:";
    cin >> Grade;

    if (Grade >= 81 && Grade <= 100)
    {

        cout << "Very Good";
    }
    else if (Grade >= 61 && Grade <= 80)
    {

        cout << "Good";
    }
    else if (Grade >= 41 && Grade <= 60)
    {

        cout << "Average";
    }
    else if (Grade <= 40)
    {

        cout << "Fail";
    }
    else
    {
        cout << "Invialid Grade";
    }

    return 0;
}