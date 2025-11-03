class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans;
        //sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>absolute;

        for(int i=0;i<nums.size();i++){
           int x=abs(nums[i]);
           absolute.push_back(x);
          // cout<<absolute[i];
        }
        sort(absolute.begin(),absolute.end());
        for(int i=0;i<nums.size();i++){
           cout<<absolute[i];
        }
        ans=(long)absolute[n-1]*(long)absolute[n-2]*100000;
        return ans;

    }
};