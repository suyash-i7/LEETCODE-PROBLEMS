class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int x,sum=0;
        sort(nums.begin(),nums.end());
        vector<int>hash(102,0);
        for(auto i:nums){
            if(i>=0) hash[i]++;
            sum+=i;
        }
        
        float avg=(float)sum/nums.size();
        x=floor(avg)+1;
        if (x < 1) x = 1;
        for(int j=x;j<hash.size();j++){
            if(hash[j]==0) return j;
        }
        return 1;
    }
};