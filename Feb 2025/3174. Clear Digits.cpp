class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] - '0' <= 9 && s[i] - '0' >= 0) st.pop();
            else st.push(s[i]);
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};