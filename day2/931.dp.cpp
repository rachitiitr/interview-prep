#include <vector>
using namespace std;

class Solution
{
    const int inf = 1e8;
    vector<vector<int>> dp, vis;

public:
    int go(int x, int y, vector<vector<int>> &A)
    {
        if (x == A.size())
            return 0;
        if (y == A[0].size() || y == -1)
            return inf;

        int &ans = dp[x][y];
        if (vis[x][y])
            return ans;

        //case 1: (x+1, y)
        ans = min(ans, A[x][y] + go(x + 1, y, A));

        //case 2: (x+1, y-1)
        ans = min(ans, A[x][y] + go(x + 1, y - 1, A));

        //case 3: (x+1, y+1)
        ans = min(ans, A[x][y] + go(x + 1, y + 1, A));

        vis[x][y] = 1;
        return ans;
    }

    int minFallingPathSum(vector<vector<int>> &A)
    {

        if (A.empty())
            return 0;
        int rows = A.size();
        int cols = A[0].size();
        dp.resize(rows, vector<int>(cols, INT_MAX));
        vis.resize(rows, vector<int>(cols, 0));

        int ans = INT_MAX;

        for (int i = 0; i < cols; i++)
        {
            //0th row, ith column as starting point
            // go(x, y) //minimum pathSum when we start the journey from (x,y) till matrix bottom
            // dp[x][y] will store what go(x, y) will return;
            ans = min(ans, go(0, i, A));
        }

        return ans;
    }
};