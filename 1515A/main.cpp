#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,x;
  int w[101];
  cin>>n>>x;
  int sum=0;
  for (int i=0;i<n;i++){
    cin>>w[i];
    sum+=w[i];
  }
  if (sum==x){
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  for (int i=0;i<n;i++){
    if (x==w[i]){
      swap(w[i],w[i+1]);
    }
    cout<<w[i]<<' ';
    x-=w[i];
  }
  cout<<endl;
  return;
}

int main(){
  int T; cin>>T;
  while (T--)
    solve();
  return 0;
}
