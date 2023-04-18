#include <iostream>
using namespace std;
void Left(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        swap(arr[i], arr[i - 1]);
    }
    arr[n - 1] = temp;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    Left(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}