class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(freq[a]==freq[b]){
                return a>b;
            }
            return freq[a]<freq[b];
        });
        return nums;
        // map<int,int>flipped;
        // for(auto i:map){
        //     flipped[i.second]=flipped[i.first];
        // }

        // priority_queue<pair<int,int>>store;
        // for(auto i:freq){
        //     store.push({i.second,i.first});
        // }
        // vector<int>ans;
        // while(!store.empty()){
        //     auto[a,b]=store.top();
        //     store.pop();
        //     for(int i=0;i<a;i++){
        //         ans.push_back(b);
        //     }
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

    }
};