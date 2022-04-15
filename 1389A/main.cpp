#include <bits/stdc++.h>
using namespace std;
int n,m,t,l,r,ans;
signed main(){
   cin>>t;
   for(int i=0;i<t;++i){
    cin>>l>>r;
    n=l;
    if(n*2<=r) m=2*n;
    else{
        if(n%2==0){
          m=n+2;
        }
        else n++,m=n+2;
    }
    if(2*l>r) cout<<-1<<" "<<-1<<'\n';
    else
    cout<<l<<" "<<2*l<<'\n';
   }
    return 0;
}
