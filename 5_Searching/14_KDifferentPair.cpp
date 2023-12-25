
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{3,1,4,1,5};
    int k=2;
    set<pair<int, int>> ans;

    sort(nums.begin(), nums.end());

    int i = 0, j = 1;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];

        if (i != j && diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout<< ans.size();
}
