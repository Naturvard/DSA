// Stock Buy Sell Problem
#include <iostream>
using namespace std;
int Stock(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit = profit + (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}
int main()
{
    int arr[5] = {1, 5, 3, 8, 12};
    int n = 5;
    cout << Stock(arr, n);
}