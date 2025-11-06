class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>map;
        for(auto i:tasks){
            map[i]++;
        }
        int count=0;
        for(auto i:map){
            int x=i.second;
            while(x!=0){
                if(x<=1) return -1;
                else if(x%3==0){
                    count+=x/3;
                    break;
                }
                else{
                    x-=2;
                    count++;
                }
            }
        }
        return count;
    }
};