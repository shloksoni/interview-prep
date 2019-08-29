class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int mp[103][103]= {0};
        set<char> s;
        vector<string>ans;
        for(int i =0; i < A.size();i++){
            for(char c : A[i]) {mp[i][c - 'a']++;s.insert(c);
            
        }
        
        for(char c : s){
            int m = 1000;
            
            for(int i = 0; i < A.size(); i++){
                m = min(m,mp[i][c - 'a']);
            }
            string str = "";str+=c;
            while(m--) ans.push_back(str);
        }
        }
        
        return ans;
    }
};