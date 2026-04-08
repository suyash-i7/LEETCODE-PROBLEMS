class Solution {
public:
  const int MOD = 1e9 + 7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
            int idx=queries[i][0];
             while(idx<=queries[i][1]){
                nums[idx]=(1LL*nums[idx]*queries[i][3])%MOD;           // USE OF 1LL means typecast
                idx+=queries[i][2];
             }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
                ans=ans^nums[i];
        }
        return ans;
        
    }
};