#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//約数列挙
vector<ll> divisor_enumerate(ll N){
  vector<ll> res;
  for(ll i=1; i*i<=N; i++){
    if(N%i==0){
      res.push_back(i);
      if(i*i!=N) res.push_back(N/i);
    } 
  }
  sort(res.begin(), res.end());
  return res;
}

int main(){
  ll N; cin>>N;
  ll ans=0;
  vector<ll> res=divisor_enumerate(N);
  int n=res.size();
  for(ll i=0; i<n; i++) ans+=res[i];
  cout<<ans<<endl;
}