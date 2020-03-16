#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi a(n),b(n);
        for(int i =0; i < n; i++)cin>>a[i];
        for(int i =0 ;i < n; i++)cin>>b[i];

        map<int,int> mp;
        for(int i =0; i<n; i++){
            mp[a[i]] +=  b[i];
        }
        int mi = INT_MAX;
        for(auto i : mp){
            mi = min(mi,i.second);
        }

        cout<<mi;

    }



}
