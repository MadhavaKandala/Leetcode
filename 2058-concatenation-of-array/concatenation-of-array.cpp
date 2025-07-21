class Solution {
public:
  vector<int> getConcatenation(vector<int>& nums) {
        int oldSize = nums.size();
        nums.resize(nums.size() * 2); 
        for(int i = 0; i < oldSize; ++i)
        {
            nums[i+oldSize] = nums[i];
        }
        return nums;
    }
};