class Solution {
public:
    int reverse(signed x) {

        long rem, res=0;
        while(x!=0){
            rem=x%10;
            x=x/10;
            res=(res*10)+rem;
        }
        if(res>=pow(-2,31) && res<=pow(2,31)-1){
         return res;}
        else{
            res=0;
            return res;
        }
        
    }
};