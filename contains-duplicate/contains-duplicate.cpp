class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //int n = nums.size();
        sort(nums.begin(),nums.end());
        int count =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                count++;
            }
        }
        
        return (count==0?false:true);
        
        
        
    }
};