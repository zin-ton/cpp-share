#include <bits/stdc++.h>
using namespace std;
long long a,b,x,y,z,t;
signed main(){
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>a>>b;
        x=a*b;
        y=a;
        z=x-y;
        if(z%a==0 && x!=0 && y!=0 && z!=0){
          if(y==z){
            x*=2;
            z=x-y;
            cout<<"YES"<<'\n'<<z<<" "<<y<<" "<<x<<'\n';
          }
          else
          cout<<"YES"<<'\n'<<z<<" "<<y<<" "<<x<<'\n';

        }
        else cout<<"NO"<<'\n';
    }
    return 0;
}
