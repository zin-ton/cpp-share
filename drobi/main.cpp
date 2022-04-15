#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
long double x,now,z,c;
int n,ans,kek,y;
signed main()
{
    cin>>x>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            z=j;
            c=i;
            now=z/c;
            if(now<=x && __gcd(j,i)==1){
                //cout<<j<<" "<<i<<'\n';
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
