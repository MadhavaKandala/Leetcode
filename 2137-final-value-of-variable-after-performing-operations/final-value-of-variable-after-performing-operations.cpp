class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(int i = 0; i < operations.size(); i++){
            string ch = operations[i];
            if(ch == "X++" || ch == "++X") res += 1;
            else res -= 1;
        }
        return res;
    }
};