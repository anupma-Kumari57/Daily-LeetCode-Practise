class Solution {
public:
    int divide(long long int dividend, long long int divisor) {
        long long int ans=dividend/divisor;
         if(ans>INT_MAX){
            return INT_MAX;
        }
        if(ans<INT_MIN){
            return INT_MIN;
        }
        return ans;
    }
           
        
};