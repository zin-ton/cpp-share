#include <bits/stdc++.h>
using namespace std;
int t,n,k1,k2,w,b,now;
signed main(){
    cin>>t;
    for(int k=0;k<t;++k){
        cin>>n>>k1>>k2>>w>>b;
        w-=min(k1,k2);
        if(abs(k1-k2)>=2){
            w-=abs(k1-k2)/2;
        }
        b-= min(n-k1,n-k2);
        if(abs((n-k1)-(n-k2))>=2){
            b-=abs((n-k1)-(n-k2))/2;
        }
        //cout<<w<<" "<<b<<'\n';
        if(w<=0 && b<=0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
