// N = 10^3
// O(N^3) ~ 10^9

//Coding Interviews or Competitive Programming
// 10^8 operations max get accepted.

// O(N^2) ~ 10^6 this is what we have to implement
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<int>> dp, vis; //C++ stl video - check my playlist
public:
    //this returns whether the substring S[i..j] is a palindrome
    int go(int i, int j, string &s)
    {
        if (i > j)
            return 1;
        if (i == j)
            return 1;
        int &ans = dp[i][j];
        if (vis[i][j])
            return ans;
        vis[i][j] = 1;
        if (s[i] != s[j])
            return ans = 0;

        return ans = go(i + 1, j - 1, s);
    }

    int countSubstrings(string s)
    {

        int n = s.size();
        dp.resize(n, vector<int>(n, -1));
        vis.resize(n, vector<int>(n, 0));
        int ans = 0;

        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
            {
                ans += go(i, j, s);
            }

        return ans;
    }
};