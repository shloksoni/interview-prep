#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    bool flag = true;
    cin>>n>>k;
    vi a(n),res;
    for(int i =0; i < n; i++) cin>>a[i];
    for(int i = n-1; i>=0; i-- ){
        if(k <= 0){
            for(int j = i; j >=0; j--) {
                res.push_back(0);

            }
            break;
        }
        if(k % a[i] == 0){
            if(i == 0){
                flag = false;
                break;
            }
            res.push_back(k / a[i] - 1);
            k -= (a[i] * (k/a[i] - 1));

        }
        else{
            res.push_back(k/a[i] + 1);
            k -= (a[i] * (k/a[i] + 1));

        }
     }
     if(flag){
        cout<<"YES";
        for(int i = n-1; i >=0; i--)cout<<res[i]<<" ";
     }
     else cout<<"NO";
     cout<<"\n";
   }

}
