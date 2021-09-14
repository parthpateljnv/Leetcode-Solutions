class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currsum = maxsum;
        int n = nums.size();
        for(int i=1;i<n;i++){
            currsum = max(nums[i],currsum+nums[i]);
            maxsum = max(maxsum,currsum);
            
            
        }
        
        
        return maxsum;
    }
};