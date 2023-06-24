class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
         return false;
        if (x == 0)
         return true;
        
        long long rem, res=0;
        int temp=x;
        
        while(temp!=0){
            rem = temp%10;
            temp = temp/10;
            res = (res*10) +rem;
        }
        
        return (res==x);
    }
};