class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        int n = A.size();
        while(n > 1){
        int maxIndex = check(A,n);
        ans.push_back(maxIndex);
        reverse(A.begin(),A.begin() + maxIndex); 
        reverse(A.begin(),A.begin() + n);
        ans.push_back(n);
        n--;
        }
        return ans;
            
    }
    
    int check(vector<int> a, int n){
        int m = -1;
        int ind;
        for(int i =0; i < n; i++){
            if(m < a[i]){
                m = a[i];
                ind = i;
            }
        }
        return ind + 1 ;
    }
};





