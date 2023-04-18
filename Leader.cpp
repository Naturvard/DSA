#include <iostream>
using namespace std;
void Leader(int arr[], int n)
{
    int current_leader = arr[n - 1];
    cout << current_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > current_leader)
        {
            current_leader = arr[i];

            cout << current_leader << " ";
        }
    }
}

int main()
{
    int arr[7] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    Leader(arr, n);
}