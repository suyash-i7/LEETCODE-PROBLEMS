class Solution {
public:
    int countSegments(string s) {
        int count=0;
        stringstream ss(s);
        while(ss>>s){
            count++;
        }
        return count;
    }
};