class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
          //  if(numExchange>numBottles) break;
            numBottles=numBottles-numExchange;
            numExchange++;
            numBottles++;
            ans++;
            
        }
        return ans;
    }
};