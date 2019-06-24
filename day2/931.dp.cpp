#include <vector>
using namespace std;

class Solution
{
    const int inf = 1e8;

public:
    int go(int x, int y, vector<vector<int>> &A)
    {
        if (x == A.size())
            return 0;
        if (y == A[0].size() || y == -1)
            return inf;

        int ans = INT_MAX;

        //case 1: (x+1, y)
        ans = min(ans, A[x][y] + go(x + 1, y, A));

        //case 2: (x+1, y-1)
        ans = min(ans, A[x][y] + go(x + 1, y - 1, A));

        //case 3: (x+1, y+1)
        ans = min(ans, A[x][y] + go(x + 1, y + 1, A));

        return ans;
    }

    int minFallingPathSum(vector<vector<int>> &A)
    {
        if (A.empty())
            return 0;
        int rows = A.size();
        int cols = A[0].size();
        int ans = INT_MAX;

        for (int i = 0; i < cols; i++)
        {
            //0th row, ith column as starting point
            // go(x, y) //minimum pathSum when we start the journey from (x,y) till matrix bottom
            ans = min(ans, go(0, i, A));
        }

        return ans;
    }
};