#include <iostream>
using namespace std;
int freq(int arr[], int n)
{
    int freq = 1;
    int i = 1;
    while (i < n)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
        if (n == 1 || arr[n - 2] != arr[n - 1])
        {
            cout << arr[n - 1] << "" << +1;
        }
    }
}
int main()
{

    int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

    cout << freq(arr, n);
}