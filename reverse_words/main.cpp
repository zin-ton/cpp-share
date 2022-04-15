#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
#define pb push_back
string s;
int n,kol=0,ans;
vector <string> v;
signed main()
{
    fast
   // files
    cin>>n;
    getline(cin,s);
    for(int j=0;j<n;++j){
        getline(cin,s);
        for(int i=0;i<s.size();++i){
            if(s[i]=='H' || s[i]=='I' || s[i]=='N' || s[i]=='O' || s[i]=='S' || s[i]=='X' || s[i]=='Z' || s[i]=='0') kol++;
            if(s[i]=='M'){
                kol++;
                s[i]='W';
            }
            else
            if(s[i]=='W'){
                kol++;
                s[i]='M';
            }
            if(s[i]=='6'){
                kol++;
                s[i]='9';
            }
            else
            if(s[i]=='9'){
                kol++;
                s[i]='6';
            }
            /*if(s[i]==' '){
              s.erase(s.begin()+i);
              //cout<<s<<'\n';
            }*/

        }
        if(kol==s.size() && s.size()!=0){
                reverse(s.begin(),s.end());
                ans++;
                v.pb(s);
            }
        kol=0;

    }
    cout<<ans<<'\n';
    for(int i=0;i<v.size();++i) cout<<v[i]<<'\n';
    return 0;
}
