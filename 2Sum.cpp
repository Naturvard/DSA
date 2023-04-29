

#include <bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        int need = target - nums[i];
        if (mp.find(need) != mp.end())
        {
            v.push_back(mp[need]);
            v.push_back(i);
            return v;
        }
        else
        {
            mp[nums[i]] = i;
        }
    }
    return v;
}
int main()
{
    vector<int> nums = {3, 0, 6, 2, 4, 2};
    int target = 6;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
