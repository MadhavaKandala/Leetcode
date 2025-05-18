class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // vector<int> dp(nums.size());  // declaring a dp
        // dp[0] = nums[0];

        // for(int i = 1; i < nums.size(); i++){
        //     dp[i] = max(nums[i], nums[i] + dp[i-1]);
        // }
        // return ranges::max(dp);




        int res = nums[0];
        int max_ending = nums[0];
        for(int i = 1; i< nums.size(); i++){
            max_ending = max(max_ending + nums[i], nums[i]);
            res = max(res, max_ending);
        }
        return res; // kadane's algorithm
    }
};