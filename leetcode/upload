class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rows = A.size();
        int column = A[0].size();
        
        vector<vector<int>> ans(column, vector<int> (rows, 0));
        for(int i=0; i<column; i++)
        {
            for(int j=0; j<rows; j++)
            {
                ans[i][j] = A[j][i];
            }
        }
        
        return ans;
    }
};