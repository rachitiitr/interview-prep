#include<bits/stdc++.h>
using namespace std;

int maxmSubArray(vector<int>v)
{
  int res=INT_MIN;
  int current_max=0;

  for(int i=0;i<v.size();i++)
  {
    current_max+=v[i];

    if(res<current_max)
    {
      res=current_max;
    }

    if(current_max<0)
    {
      current_max=0;
    }
  }
  return res;
}

int main()
{
  .....
  ....
  cout<<maxmSubArray(..)<<endl;
  return 0;
}
