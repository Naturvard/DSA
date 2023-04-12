// Searching element in array
#include <iostream>
using namespace std;
int search(int x, int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {20, 50, 7, 5}, x = 50;

    cout << search(x, 4, arr);
    ;
}