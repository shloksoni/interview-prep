#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define REP( i,  b,  n) for(int i =b; i< n; i++)
using namespace std;
map<string,int>mp;

int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a % b);
}
void solve(){
   double a,b;
   cin>>a>>b;
   double ans = a  * b;
   cout<<fixed;
  cout << std::setprecision(6) << (a > 1000 ? ans * 0.9 : ans) << '\n';    
    
    
}

int main(){
   
    int t;
    cin>>t;
    while(t--)solve();

    return 0;

   


}