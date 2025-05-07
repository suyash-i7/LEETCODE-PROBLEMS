class Solution {
public:
int gcd(int a,int b){
    if(b==0){
        return a;
    }
        return gcd(b,a%b);
    
}
int lcm(int a,int b){
    return((a*b)/gcd(a,b));
}
    int smallestEvenMultiple(int n) {
         return lcm(n,2);
         
        // if(n%2==1&&n>2){
        //     return n*2;
        // }
        
        // if(n%2==0){
          

       // }
        
    }

};