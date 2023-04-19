// Trapping rain Water
#include <iostream>
using namespace std;
int TrappingRain(int arr[], int n)
{
    int res;
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res = res + min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}
int main()
{
    int arr[5] = {5, 0, 6, 2, 3};
    int n = 6;
    cout << TrappingRain(arr, n);
}