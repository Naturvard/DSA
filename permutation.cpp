#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    int index = -1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        for (int i = arr.size() - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                swap(arr[i], arr[index]);
                break;
            }
        }
        reverse(arr.begin() + index + 1, arr.end());
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 9, 7, 5};
    nextPermutation(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
