class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high=height.size()-1,strength=0;
        while(low<high){
           int current=min(height[low],height[high])*(high-low);
           
           strength=max(strength,current);
    
            if(height[low]>=height[high]){
                high--;
            }
            // if(height[low]<height[high]){low++;}    :   i have to figure out why this is not working but same things work in else 
            //                                               as it dosen't work on only few.
             else{
                low++;
            }
            
        }
        return strength;
        
    }
};