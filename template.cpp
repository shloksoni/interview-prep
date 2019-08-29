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
   
    list<int> pos;
    for(int i = 0; i < 10; i++)pos.push_back(i);

    for(int i : pos)cout<<i<<" ";
    auto it = pos.begin();
    pos.erase(it++);

    while(){
      cout<<*it++<<" ";
      if(it == pos.end()) it = pos.begin();
    }

   


}