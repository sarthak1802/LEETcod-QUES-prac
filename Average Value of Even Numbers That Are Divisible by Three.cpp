// Average Value of Even Numbers That Are Divisible by Three
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ans=0,count=0;;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && nums[i]%3==0)
            {
                count++;
                ans+=nums[i];
            }
        }
        return count==0?0:ans/count;
    }
};
