#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define vec vector
#define FILES ifstream cin("input.txt");ofstream cout("output.txt");
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define pb push_back
ll a,b;
bool kek;
vec < int > ras(vec < int > a, vec < int > b){
    ///a >= b
    vec < int > c = a;
    while(b.size() != a.size()) b.pb(0);
    for(int i = 0; i+1 < a.size(); i++){
        c[i] -= b[i];
        while(c[i] < 0) c[i] += 10, c[i+1]--;
    }
    c[c.size()-1] -= b[b.size()-1];
    while(c.back() == 0) c.pop_back();
    return c;
}
vec <int> x;
vec <int> y;
vec <int> res;
signed main()
{
    cin>>a>>b;
    while(a>=9 && b>0){
        x.pb(9);
        a-=9;
        b--;
    }
    while(a>=0 && b>0){
        x.pb(a);
        a-=a;
        b--;
    }
    if(a>0) return cout<<"-1",0;
    for(int i=x.size()-1;i>=0;--i){
        y.pb(x[i]);
    }
    res=ras(y,x);
    for(int i=res.size()-1;i>=0;--i) cout<<res[i];
    if(res.empty()) cout<<"0";
    return 0;
}
