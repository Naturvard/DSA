#include <iostream>
using namespace std;
int maxConsZeros(int arr[], int n)
{
    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr = curr + 1;
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 0, 1, 1, 1, 1, 1};
    int n = 7;
    cout << maxConsZeros(arr, n);
}