class Solution {
public:
    int divide(int n) {
        if(n==1||n==2){
            return 0;
        }
        if (n % 2 == 1)
            return 1;
       

        return divide(n / 2);
    }
    bool isPowerOfTwo(int n) {
       
        if(n==1){
            return true;
        }
        if (n<=0||n % 2 == 1)
            return false;

        else {
            int remain = divide(n);
            if (remain == 1)
                return false;
            else {
                return true;
            }
        }
    }
};