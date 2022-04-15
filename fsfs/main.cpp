#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef long long ll;
typedef long double ld;
ld mi,ch;
ld ans;
string s;
signed main(){
    //ifstream cin("input.txt");
    //ofstream cout("output.txt");
    fast_io
    cin>>s;
    int i=0;
        while(s[i]!=':') ch+=s[i]-'0',ch*=10,i++;
        ch/=10;
        i++;
        while(i<s.size()) mi+=s[i]-'0',mi*=10,i++;
        mi/=10;
    if(ch>=12) ch-=12;
    ans=abs(((ch*1/12*360)+(mi*1/12*1/60*360))-(mi*1/60*360));
    while(ans>180) ans-=180;
    //if(ans>90) ans=180-ans;
    cout<<setprecision(4)<<ans;
    return 0;
}
