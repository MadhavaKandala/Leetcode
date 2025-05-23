class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> window;
        for(int i = 0; i < nums.size(); i++){
            if(window.find(nums[i]) != window.end() && i - window[nums[i]] <= k){
                return true;
            }
            window[nums[i]] = i;
        }
        return false;
    }
};