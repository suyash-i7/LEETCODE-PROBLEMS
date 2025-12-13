class Solution {
public:
    int countOdds(int low, int high) {
        if(low==0){
            if(high%2==0) return high/2;
            else return (high/2)+1;
        }
        else if(low%2!=0&& high%2!=0) return (high-low+1)/2+1;
        
        return (high-low+1)/2;
    }
};