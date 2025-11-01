class Solution {
public:
    bool detectCapitalUse(string word) {
        bool check;
        if(word[0]>=65&&word[0]<=90) check=true;
        else check=false;
         int upper=0,lower=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>=65&&word[i]<=90) upper++;
            else if(word[i]<=122&&word[i]>=97) lower++;
        }
        if(lower==word.length()||upper==word.length()) return true;
        else if(check&&lower==word.length()-1) return true;
        return false;
    }
};