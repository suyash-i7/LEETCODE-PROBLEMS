class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long rem=0;
        long long count=0;
        
        for(int i=1;i<=k;i++){
           rem=(rem*10+1)%k;
           count++;
           if(rem==0) return count;
        }
        
        return -1;
    }
};