#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d,t,n;
string s;
signed main(){
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>n;
        cin>>s;
        for(int j=0;j<2*n;j+=2) cout<<s[j];
        cout<<'\n';
    }
    return 0;
}
