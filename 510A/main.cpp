#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
ll n,m;
signed main()
{
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i%2==0) cout<<'#';
            else if(i) cout<<'
        }
    }
    return 0;
}
