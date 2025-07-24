class Solution {
public:
    int minOperations(int n) {
        int sum=n*n,mean=n;
        int count=0;
        for(int i=1;i<=(2*n-1)/2;i+=2){
            count+=n-i;
        }
       return count;
    }
};