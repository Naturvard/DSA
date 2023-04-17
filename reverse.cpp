#include <iostream>
using namespace std;
void Reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        high--;
        low++;
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    Reverse(arr, n);

    cout << "After Reverse" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}