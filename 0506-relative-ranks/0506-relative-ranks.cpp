class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>copy=score;
         sort(score.begin(),score.end());
         reverse(score.begin(),score.end());
        vector<pair<int,string>>ans;
        
        for(int i=0;i<score.size();i++){
            string a=to_string(i+1);
            if(i==0) ans.push_back({score[i],"Gold Medal"});
            else if(i==1) ans.push_back({score[i],"Silver Medal"});
            else if(i==2) ans.push_back({score[i],"Bronze Medal"});
            else{
                ans.push_back({score[i],a});
            }
        }
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i].first<<" ";
        // }
        vector<string>final_ans;
        for(int i=0;i<copy.size();i++){
            for(int j=0;j<ans.size();j++){
                if(copy[i]==ans[j].first) final_ans.push_back(ans[j].second);
            }
        }
        return final_ans;
        
    }
};