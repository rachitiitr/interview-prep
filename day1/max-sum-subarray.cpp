//https://leetcode.com/problems/maximum-subarray/
#include <iostream>
#include <vector>

using namespace std;
// O(N), O(1)
int maxSubArray(vector<int> &nums)
{
    int i, n = nums.size();
    long long prevMax = INT_MIN, curMax;
    long long ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curMax = nums[i];
        curMax = max(curMax, nums[i] + prevMax);
        ans = max(ans, curMax);
        prevMax = curMax;
    }
    return ans;
}

int main()
{

    return 0;
}