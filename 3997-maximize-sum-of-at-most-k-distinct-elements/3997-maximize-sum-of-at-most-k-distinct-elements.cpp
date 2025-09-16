class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0&k>0;i--){
            if(nums[i]==nums[i-1]) continue;
            
            ans.push_back(nums[i]);
            k--;
        }
        if(k>0) ans.push_back(nums[0]);
        return ans;
    }
};