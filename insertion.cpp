#include<iostream>
 using namespace std;
int insert(int x, int n, int pos, int cap, int arr[])
{
    if (n == cap)
    {
        return n;
    }
    int index = pos - 1;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return (n + 1);
}
int main()
{
    int arr[] = {5, 10, 20};
    int x = 7;
    int pos = 2;
    cout << insert(x, 3, pos, 4, arr);
}