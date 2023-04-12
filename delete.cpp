/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int deletey(int arr[], int x, int n)
{
    for (int i = 0; i, n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }

        if (i == n)
        {
            return n;
        }

        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    return (n - 1);
}

int main()
{
    int arr[] = {3, 8, 12, 5, 6, 9};
    int x = 12;
    cout << deletey(arr, 12, 6);
}
