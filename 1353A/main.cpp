#include <bits/stdc++.h>
using namespace std;
int n,m,t,ans;
signed main(){
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>n>>m;
        cout<<min(2,n-1)*m<<'\n';
    }
    return 0;
}
