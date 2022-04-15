#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
string s,s2;
ll n,ans;
bool big=0,low=0,numbers=0,siz=0,lel=0,kek=0;
signed main()
{
    cin>>n;
    getline(cin,s);
    for(int i=0;i<n;++i){
        getline(cin,s);
        if(s.size()==8){
            siz=1;
            for(int j=0;j<s.size();++j){
                if(s[j]=='O' || s[j]=='0' || s[j]=='I' || s[j]=='l' || s[j]=='1') lel=1;
                else{
                    if((s[j]>='a' && s[j]<='z')) low=1;
                    else if(s[j]>='A' && s[j]<='Z') big=1;
                    else if (s[j]>='0' && s[j]<='9') numbers=1;
                    else kek=1;
                }
            }
        }
        if(kek==0 && lel==0 && siz==1) ans++;
        big=0;
        low=0;
        numbers=0;
        siz=0;
        lel=0;
        kek=0;
    }
    cout<<ans<<" "<<n-ans;
    return 0;
}
