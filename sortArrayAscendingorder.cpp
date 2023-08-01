#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 1, 0, 0, 0};
    int n = 11;

    int low = 0, mid = 0, high = 10;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            int t = arr[mid];
            arr[mid] = arr[high];
            arr[high] = t;
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
