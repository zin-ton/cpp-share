#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
vector <ll> v;
ll x,y,n;
signed main(){
    cin>>x>>y>>n;
    v.reserve(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}
