class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        
        for(int i=0;i<words.size();i++){
            
            string rev=words[i];
            reverse(rev.begin(),rev.end());
            
            if(words[i]==rev){
                ans=words[i];
                return ans;
            }
        }    
        
        return ans;
        
    }
};