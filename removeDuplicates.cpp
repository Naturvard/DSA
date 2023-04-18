// Remove Duplicates from array
#include <iostream>
using namespace std;
int RemoveDuplicates(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[res])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[5] = {10, 10, 30, 30, 30};
    int n = 5;
    cout << RemoveDuplicates(arr, n);
}