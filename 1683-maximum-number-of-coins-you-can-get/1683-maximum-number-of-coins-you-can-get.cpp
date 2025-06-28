class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum=0;
        int j=piles.size()/3;
        for(int i=piles.size()-2;j>0;i-=2){         //1,2,3,4,5,6,7,8,9
            sum+=piles[i];
            j--;

        }
        return sum;
    }
};