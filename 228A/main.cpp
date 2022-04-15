#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
ll n,p,k,now,ans=0;
signed main()
{
    cin>>n>>p>>k>>now;
    if(n==p) ans++;
    else
    if(n==k) ans++;
    else
    if(n==now) ans++;
    if(p==k) ans++;
    else
    if(p==now) ans++;
    if(k==now) ans++;
    cout<<ans;
    return 0;
}
