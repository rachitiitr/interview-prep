#include <vector>
#include <iostream>
using namespace std;

//O(N*log(N))
class Solution
{
public:
    // int get_ones(int x)
    // {
    //     int ans = 0;
    //     while (x)
    //         ans++, x -= (x & -x);
    //     return ans;
    // }
    vector<int> countBits(int num)
    {
        //0 to num
        //count the ones in its binary representation
        vector<int> ans = {};
        for (int i = 0; i <= num; i++)
        {
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};