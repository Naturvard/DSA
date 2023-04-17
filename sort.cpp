#include <iostream>
using namespace std;
bool Sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    { // Using logic that if array is sorted then it will return true otherwise in first compariosn only it will return false so rduicng the transversal
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 99, 10};
    int n = 8;
    cout << Sorted(arr, n);
}