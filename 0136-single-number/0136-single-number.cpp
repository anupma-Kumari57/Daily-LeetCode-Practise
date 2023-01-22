class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;
        for(auto a:nums)answer=answer^a; 
        return answer;
    }
};