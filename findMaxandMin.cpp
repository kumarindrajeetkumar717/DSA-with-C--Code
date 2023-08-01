#include <iostream>
using namespace std;

int gatMax(int num[], int n)
{

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int gatMin(int num[], int n)
{

    int min;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;

    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maxium Value is" << gatMax(num, size) << endl;
    cout << "Minium Value is" << gatMin(num, size) << endl;

    return 0;
}
