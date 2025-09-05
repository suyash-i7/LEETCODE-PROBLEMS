class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1=z-x;
        int p2=z-y;
        if(abs(p1)==abs(p2)) return 0;
        else if(abs(p1)>abs(p2)) return 2;
         
       return 1;
    }
};