class Solution {
public:
    vector<int> minOperations(string boxes) {
        int s = 0, x = 0, cnt = 0;
        int n = boxes.length();
        vector<int> ones(n, 0);
        for(int i = 0; i < n; i++){
            if(boxes[i] == '1')
            {   s += i; 
                x++;
            }
            ones[i] = s;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(boxes[i] == '1')cnt++;
            int res = cnt*i - 2*ones[i] + s - (x - cnt)*i;
           // int res = abs(s - i*x);
            ans.push_back(res);
        }
        return ans;
    }
};