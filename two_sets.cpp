#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// -------------------------<RNG>------------------------- 
// RANDOM NUMBER GENERATOR
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());  
#define SHUF(v) shuffle(all(v), RNG); 
// Use mt19937_64 for 64 bit random numbers.
bool checkSame(int a[],int n){
   for(int i=1;i<=n-1;i++){
      if(a[i-1]!=a[i]){
         return true;
      }
   }
   return false;
}
void solve(){
ll n;
cin>>n;
ll sum=(n*(n+1))/2;
vector<ll> ans;
for (ll i = 0; i < n; ++i)
{ 
 ans.push_back(i+1);
 
}
if(sum%2==0){
  cout<<"YES"<<"\n";

  vector<ll>v,v1;
  if(n%2!=0){
  ll s=0,e=n-2;
  bool flag=1;
  while(s<=e){
    if(flag){
      v1.push_back(ans[s]);
      v1.push_back(ans[e]);
    }
    else{
      v.push_back(ans[s]);
      v.push_back(ans[e]);
    }
    s++;
    e--;
    flag=!flag;
   }
   v.push_back(ans[n-1]);
  }
  else{
  ll s=0,e=n-1;
  bool flag=1;
  while(s<=e){
    if(flag){
      v1.push_back(ans[s]);
      v1.push_back(ans[e]);
    }
    else{
      v.push_back(ans[s]);
      v.push_back(ans[e]);
    }
    s++;
    e--;
    flag=!flag;
   }
  }
  cout<<v1.size()<<endl;
  for (auto it:v1)
  {
    cout<<it<<" ";
  }
  cout<<"\n";
  cout<<v.size()<<"\n";
  for(auto it:v){
    cout<<it<<" ";
  }
}
else{
  cout<<"NO"<<"\n";
}

}


int main(){
/*#ifndef ONLINE_JUDGE

freopen("input.txt","r",stdin);

freopen("output.txt","w",stdout);

#endif*/
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int t=1;
//cin>>t;
 
 while(t--){
 	solve();
 }

return 0;	
}
 
