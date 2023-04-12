#include <iostream>
using namespace std;
int laregst(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 23, 40, 9};
    cout << laregst(arr, 4);
}