class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long ans=1;
        long long count=1;
        // bool check=true;
        for(int i=1;i<prices.size();i++){
            if(prices[i]==prices[i-1]-1) count++;
            else count=1;

            cout<<count<<" ";
            ans+=count;
        }
        return ans;
    }
};