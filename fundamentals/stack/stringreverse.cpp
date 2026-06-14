class Solution {
  public:
    string reverse(const string& S) {
        // code here
        int n=S.length();
        stack <char> st;
        
        for(char c:S){
            st.push(c);
        }
        
        string ans;
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};