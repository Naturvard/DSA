#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right)
{

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
void LeftByD(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    LeftByD(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}