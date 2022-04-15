#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
string s;
bool mas[125];
ll n,p,k,now,ans=0;
signed main()
{
    cin>>n>>s;;
    for(int i=0;i<s.size();++i){
        mas[int(s[i])]=1;
    }
    for(int i=65;i<91;++i){
        if(mas[i]==0 && mas[i+32]==0) return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}
