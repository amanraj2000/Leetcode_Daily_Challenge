class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int bits = 0;
        int a = num1, b = num2;
        while(b){
            bits++;
            b = b & (b - 1);
        }
        int ans = 0;
        for(int i = 31; i >= 0; i--){
            if(a & (1 << i)){
                ans += (1 << i);
                bits--;
            }
            if(bits == 0) break;
        }
        int i = 0;
        while(bits && i < 32){
            if((ans & (1 << i)) == 0){
                ans += (1 << i);
                bits--;
            }
            i++;
        }
        return ans;
    }
};