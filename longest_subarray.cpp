// Longest subarray with sum k
// Brute force
#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int length = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            int sum = 0; // Reset sum for each subarray
            for (int m = i; m <= j; m++)
            {
                sum += a[m];
            }
            if (sum == k)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}

int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    int result = longestSubarrayWithSumK(a, k);
    cout << "Length of the longest subarray with sum " << k << ": " << result << endl;
    return 0;
}


//Better Brute force
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int length = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int sum = 0; // Reset sum for each subarray
        for (int j = i; j < a.size(); j++)
        {

            sum = sum + a[j];
            if (sum == k)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}

//Optimal code
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int left = 0;
    int right = 0;
    int maxLength = 0;
    long long sum = 0;
    int n = a.size();

    while (right < n)
    {
        sum += a[right];

        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }

        right++;
    }

    return maxLength;
}
