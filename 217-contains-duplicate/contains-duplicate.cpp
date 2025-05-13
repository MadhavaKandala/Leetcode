class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int i : nums){
            if(seen[i] >= 1) return true;
            seen[i]++;
        }
        return false;
    }
};