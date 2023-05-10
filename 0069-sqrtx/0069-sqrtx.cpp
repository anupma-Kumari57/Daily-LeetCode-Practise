class Solution {
public:
    
    long long int binarySearch(int m){
        int s=0, e=m;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        
        while(s<=e){
            long long int square=mid*mid;
            if(square==m){
                return mid;
            }
            else if(square<m){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        
        return ans;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};