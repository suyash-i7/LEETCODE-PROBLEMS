class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>map;
        int maxi=0;
        for(auto i:nums){
            map[i]++;
            maxi=max(maxi,map[i]);
        }
        if(k==1){
            return n-maxi;
        }
        int l=0,r=0,count=0;
        while(l<n&&r<n){
            long long req=(long long)nums[l]*k;
            if(req>=(long long)nums[r]){
                r++;
            }
            else{
               
                l++;
            }
             count=max(count,(r-l));
        }
        return (int)n-count;
    }
};