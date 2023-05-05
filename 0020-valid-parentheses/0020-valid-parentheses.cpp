class Solution {
public:
    bool isValid(string s) {
        
        stack <int> st;
        
        for(auto it:s){
            
            if(it=='(' || it=='{' || it=='[')
                st.push(it);
            
            else if(st.empty() 
                    || it==')' && st.top()!='(' 
                    || it=='}' && st.top()!='{' 
                    || it==']' && st.top()!='[')
                return false;
            
            else 
                st.pop();
        }
        
        return st.empty();
    }
};