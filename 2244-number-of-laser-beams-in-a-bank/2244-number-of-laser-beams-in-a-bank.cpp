class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0,device1=0;   //,row=0;
        for(int i=0;i<bank.size();i++){
            int row=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1'){
                    row++;
                }
            }
            count+=row*device1;          
            if(row!=0){
               device1=row;
            }
                         
        }
        return count;
    }
};