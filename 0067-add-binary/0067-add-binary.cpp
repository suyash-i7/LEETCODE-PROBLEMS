class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.length()-1,n2=b.length()-1;
        int sum,carry=0;
        string ans="";
        while(n1>=0||n2>=0){
            char c1=(n1>=0)?a[n1]:'0';
            char c2=(n2>=0)?b[n2]:'0';
            if((c1-'0'+c2-'0'+carry)==3){
                ans.push_back('1');
                carry=1;
            }
            else if((c1-'0'+c2-'0'+carry)==2){
                ans.push_back('0');
                carry=1;
            }
            else if((c1-'0'+c2-'0'+carry)==1){
                ans.push_back('1');
                carry=0;
            }
            else{
                 ans.push_back('0');
                 carry=0;
            }
            n1--;
            n2--;
        }
        if(carry!=0)  ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};