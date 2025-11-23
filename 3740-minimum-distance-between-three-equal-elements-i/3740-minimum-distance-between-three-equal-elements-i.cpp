class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto i:nums){
            map[i]++;
        }
       // vector<int>store;
        int sum=INT_MAX;
        for(auto k:map){
            //cout<<k.second<<" ";
            if(k.second>=3){
                // store.push_back(k.second);
            int store,index=0;
             for(int j=0;j<=k.second-3;j++){
                int a=-1,b=-1,c=-1;
               for(int i=index;i<nums.size();i++){
                if(k.first==nums[i]&&a==-1) a=i;
                else if(k.first==nums[i]&&b==-1&&a!=-1){ 
                    b=i;
                    store=i;
                }
                else if(k.first==nums[i]&&c==-1&&a!=-1&&b!=-1) c=i;
                }
                index=store;
                int x=abs(a-b)+abs(b-c)+abs(c-a);
                cout<<x<<" ";
                sum=min(sum,x);
              }
            }
        }
        if(sum==INT_MAX) return -1;
        return sum;
       
    }
};