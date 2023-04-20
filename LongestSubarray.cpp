#include <iostream>
using namespace std;
int SumSubaaray(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int main()
{
    int arr[4] = {1, -2, 3, -1};
    int n = 4;
    cout << SumSubaaray(arr, n);
}