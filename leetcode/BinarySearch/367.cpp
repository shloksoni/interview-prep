class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0, r = num;
        if(num == 1) return 1;
        while(l < r){
            long long  mid = l + (r-l)/2;
            long long ans = mid * mid;
            if(ans == num) return true;
            if(ans < num)l = mid + 1;
            else r = mid;
            
        }
        
        return false;
        
    }
};