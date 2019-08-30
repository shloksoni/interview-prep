class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n = A.size();
        int l = 0,r = n -1;
        
        while(l < r){
            if(A[l] < A[r])l++;
            else r--;
            if(l == r)return l;
        }
        
        return l;
    }
};