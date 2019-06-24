// https://leetcode.com/problems/house-robber
#include <iostream>
#include <vector>

using namespace std;
// O(N) time and O(1) space
int rob(vector<int> &nums)
{
    int i, n = nums.size();

    // cMax be the max robbery from the 1st i houses
    // pMax till i-1, ppMax is till i-2
    int ppMax, pMax, cMax;
    ppMax = pMax = cMax = 0;

    for (i = 0; i < n; i++)
    {
        cMax = pMax;
        cMax = max(cMax, nums[i] + ppMax);

        ppMax = pMax;
        pMax = cMax;
    }

    return cMax;
}

int main()
{

    return 0;
}