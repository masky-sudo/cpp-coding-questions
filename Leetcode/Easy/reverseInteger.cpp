class Solution {
public:
    int reverse(int x) {
        long y = 0;
        while(x){
            y = x%10 + y*10;
            x /= 10;
        }
        if (y < INT_MIN || y > INT_MAX){
            return 0;
        } else {
            return (int)y;
        }
    }
};