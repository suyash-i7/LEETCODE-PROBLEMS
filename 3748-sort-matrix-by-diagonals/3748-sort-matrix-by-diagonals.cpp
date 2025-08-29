class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        
        unordered_map<int,vector<int>>map;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
               int diff=i-j;
               map[diff].push_back(grid[i][j]);             //idher push back ⬇️ kiye respective vector of map mai
            }
        }
        for(auto &i:map){
           if(i.first<0) sort(i.second.begin(),i.second.end(),greater<int>());    // sort in the decreasing       
                                                                                  // you can also use the sort and then reverse \U0001f600
            else sort(i.second.begin(),i.second.end());
        }
      //  unordered_map<int,int>check;                        // just to update the index of the vector that we have to take \U0001f6eb
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int diff=i-j;
               grid[i][j]=map[diff].back();      //fetching the last element  
               map[diff].pop_back();             // deleting the last element  
            }
        }
        
     return grid;   
    }
};