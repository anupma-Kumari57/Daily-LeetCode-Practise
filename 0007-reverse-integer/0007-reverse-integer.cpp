class Solution {
public:
    int reverse(signed x) {

        long rem, res=0;
        while(x!=0){
            rem=x%10;
            x=x/10;
            res=(res*10)+rem;
        }
        if(res>=INT_MIN && res<=INT_MAX){
         return res;}
        else{
            return 0;
        }
        
    }
};