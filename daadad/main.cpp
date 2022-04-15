#include <bits/stdc++.h>
using namespace std;
long long t,a,b,c,d,x,y,z;
signed main(){
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>a>>b>>c>>d;
        x=a;
        y=b;
        z=c;
        while(x>=y+z || y>=x+z || z>=x+y){
         if(x>=y+z){
            y++;
            z++;
        }
        else{
            if(y>=x+z) x++,z++;
            else{
                if(z>=x+y) x++,y++;
            }
        }
        }
        cout<<x<<" "<<y<<" "<<z<<'\n';
    }
    return 0;
}
