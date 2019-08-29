class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        list<int>pos;
        int n = deck.size();
        vector<int> ans(n);
        
        for(int i = 0; i < n; i++)pos.push_back(i);
        bool s = true;
        auto it = pos.begin();
        int p = 0;
        while(!pos.empty()){
            if(it == pos.end())it = pos.begin();
            if(s){
                ans[*it] = deck[p];
                pos.erase(it++);
                p++;
                s = !s;
            }
            else{ it++; s = !s; }
        }
        return ans;
    }
};