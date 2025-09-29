class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>map;
        int maxi=0;
        for(auto i:s){
            map[i]++;
            maxi=max(maxi,map[i]);
        }
        int count=0,freq=maxi;
        for(int i=maxi;i>0;i--){
            int x=0;
           for(auto j:map){
             if(j.second==i){
                x++;
             }
           }
           if(x>count){
            count=x;
            freq=i;
           }
        }
        string ans;
        for(auto i:map){
            if(i.second==freq){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};