#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt);
string s;
int now=0,key;
signed main()
{
    cin>>key;
    getline(cin,s);
    getline(cin,s);
    while(true){
        if(now<s.size()-1){
        s.reverse(s.begin()+now,s.begin()+(key-1));
        now+=key;
        }
        else{
            now-=key;
            s.reverse(s.begin()+now,s.end());
            return cout<<s,0;
        }

    }
    return 0;
}
