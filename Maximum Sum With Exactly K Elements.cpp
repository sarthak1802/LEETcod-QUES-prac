// Maximum Sum With Exactly K Elements
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        return (*max_element(nums.begin(), nums.end()))*k + (k-1)*k/2;
    }
};
