class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        
        int start=-1, end=-1;
        
        while(left<=right){
            int mid = left +(right-left)/2;
            
            //First occurence
            if(nums[mid]==target){
                start=mid;
                right=mid-1;
            }
                
            else if(target>nums[mid]){
                left=mid+1;
            }
                
            else {
                right=mid-1;
            }
        }
        
        if(start!=-1){
            left=0, right=nums.size()-1;
            while(left<=right){
                int mid = left +(right-left)/2;
                
                //Last occurence
            if(nums[mid]==target){
                end=mid;
                left=mid+1;
            }
                
            else if(target>nums[mid]){
                left=mid+1;
            }
                
            else {
                right=mid-1;
            }
                
            }
            
        }
        
        return {start,end};
        
    }
};