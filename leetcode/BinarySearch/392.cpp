class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int is = 0, it = 0;
        while(is < s.length() && it < t.length()){
            if(s[is] == t[it]){
                it++;
                is++;
            }
            else it++;
            
        }
        
        if(is == s.length()) return true;
        return false;
    }
};