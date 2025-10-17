class Solution {
public:
    bool isPalindrome(int x) {
        double rev = 0;
        int num=x;
        if(x<0){ 
          return false;
        }
        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        if(rev==x){
            return true;
        }
            return false;

    }
};