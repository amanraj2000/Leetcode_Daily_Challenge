class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if(n & 1) return false;
        int close = 0, open = 0, free = 0, ffree = 0, cclose = 0, oopen = 0;
        for(int i = 0; i < n; i++){
            if(locked[i] == '0') free++;
            else if(s[i] == '(') open++;
            else close++;

            if(locked[n - 1 - i] == '0')ffree++;
            else if(s[n - 1 - i] == '(') oopen++;
            else cclose++;
            if(close - open > free || oopen - cclose > ffree)
                return false;
        }
        return true;
    }
};