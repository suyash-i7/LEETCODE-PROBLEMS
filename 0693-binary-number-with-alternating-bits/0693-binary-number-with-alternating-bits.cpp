class Solution {
public:
    bool hasAlternatingBits(int n) {\
    int num=n;
    string store="";
    while(num!=0){
        int rem=num%2;
        store.push_back(rem);
        num/=2;
     } 
     reverse(store.begin(),store.end());
    for(int i=0;i<store.length()-1;i++){
        if(store[i]==store[i+1]) return false;
    }
    return true;
    }
};