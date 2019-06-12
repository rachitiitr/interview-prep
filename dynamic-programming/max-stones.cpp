#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
    vector<int> arr;
    vector<vector<int>> dp;
    map<pair<int, int>, bool> vis; //use unordered_map with hash function provided to C++ for faster lookup

public:
    // if array from [lo, hi] what is the maxWin for the present player
    int go(int lo, int hi)
    {
        if (vis[{lo, hi}])
            return dp[lo][hi];
        if (lo + 1 == hi)
            return abs(arr[lo] - arr[hi]);
        // stones at lo pos,
        int curMaxWin = arr[lo] - go(lo + 1, hi);
        //or stones at hi pos
        curMaxWin = max(curMaxWin, arr[hi] - go(lo, hi - 1));

        vis[{lo, hi}] = 1;
        return dp[lo][hi] = curMaxWin;
    }

    bool stoneGame(vector<int> &piles)
    {
        int n = piles.size();
        // arr = move(piles);
        arr = {};
        dp.resize(n, vector<int>(n, 0));
        for (int x : piles)
            arr.push_back(x);
        //2 choices
        //pick from beg, or from end
        int maxWin = go(0, piles.size() - 1);
        if (maxWin > 0)
            return 1;
        return 0;
    }
};
int maint()
{
    return 0;
}