class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
         vector<string>duplicate=words;
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(words[i-1].size()!=words[i].size()){
                ans.push_back(words[i]);
                continue;
            } 
            sort(words[i-1].begin(),words[i-1].end());
            sort(words[i].begin(),words[i].end());
          bool x=true;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]!=words[i-1][j]) x=false;
            }
            if(!x) ans.push_back(duplicate[i]); 
        }
        return ans;
    }
};