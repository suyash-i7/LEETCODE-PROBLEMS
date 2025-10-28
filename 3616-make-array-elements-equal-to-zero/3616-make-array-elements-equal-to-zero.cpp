class Solution {
public:
int check(int x,vector<int>& nums){
  int left=0,right=0;
  for(int i=0;i<nums.size();i++){
    if(i<x) left+=nums[i];
    else if(i>x) right+=nums[i];
  }
  if(left==right) return 2;
  else if(abs(left-right)==1) return 1;
  return 0;
}
    int countValidSelections(vector<int>& nums) {
        vector<int>index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) index.push_back(i);
        }
        int ans=0;
        for(int i=0;i<index.size();i++){
            cout<<check(i,nums);
          ans+=check(index[i],nums);
        }
       return ans;
    }
};