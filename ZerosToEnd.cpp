// Move Zeros to end
#include <iostream>
using namespace std;
void Zeros(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[5] = {1, 30, 0, 0, 2};
    int n = 5;
    Zeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}