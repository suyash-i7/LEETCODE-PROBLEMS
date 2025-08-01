class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            int a=nums[0];
            return a;
        }
        vector<int>b;
        for(int i=1;i<nums.size();i++){
            int ans=nums[i]+nums[i-1];
            ans=ans%10;
             b.push_back(ans);
        }
        nums=b;
        return triangularSum(nums);
        
    }
};