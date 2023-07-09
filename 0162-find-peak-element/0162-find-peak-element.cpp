class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int max=INT_MIN;
        int index;
        
        if(nums.size()==1){
            return 0;
        }
        
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                index=i;
            }
        }

        
        return index;
        
    }
};