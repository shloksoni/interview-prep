/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp (Interval a, Interval b){
     return a.start <= b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    sort(A.begin(), A.end(), cmp);
    int siz = A.size();
    int j = 0;
    for(int i = 0; i < siz; i++){
        int l = A[i].start;
        int h = A[i].end;
        int k = i+1;
        for(; k < siz; k++){
            if(A[k].start <= h){
                h = max(A[k].end, h);
                }
            else{
                k--;
                break;
            }
        }
        i = k;
        A[j].start = l;
        A[j].end = h;
        j++;
    }
    A.erase(A.begin()+j, A.end());
    return A;
}
