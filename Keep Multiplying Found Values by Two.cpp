//Keep Multiplying Found Values by Two
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int i = 0;
        while(i != nums.size()) {
            if(nums[i] == original) {
                i = 0;
                original *= 2;
            }
            else i++;
        }
        return original;
    }
};
