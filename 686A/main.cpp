#include <bits/stdc++.h>
using namespace std;
long long x,n,d,ans,now,s;
char a;
signed main(){
    cin>>n>>x;
    now=x;
    for(int i=0;i<n;++i){
        cin>>a>>d;
        if(a=='+') now+=d;
        if(a=='-'){
            if(d<=now) now-=d;
            else s++;
        }
    }
    cout<<now<<" "<<s;
    return 0;
}
