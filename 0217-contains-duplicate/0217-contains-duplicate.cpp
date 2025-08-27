class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto i:nums){
            hash[i]++;
        }
        for(auto& j:hash){
            if(j.second>1) return true;
        }
        return false;
    }
};