#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;
int lengthOfLIS(vector<int> &nums, int k)
{

    int n = nums.size();
    dp = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
    for (int i = n - 1; i >= 0; i--)
        for (int prev = i - 1; prev >= -1; prev--)
        {
            int not_take = dp[i + 1][prev + 1];

            int take = 0;
            if (prev == -1 || (nums[i] > nums[prev] && nums[i] <= nums[prev]+k))
                take = 1 + dp[i + 1][i + 1];

            dp[i][prev + 1] = max(take, not_take);
        }

    return dp[0][0];
}

int main(){
    vector<int> arr = {1, 3, 2, 3};
    int k = 1;
    cout << lengthOfLIS(arr, k);
}
