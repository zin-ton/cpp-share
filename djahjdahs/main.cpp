#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
ll a,b,ans,ans1;
vector <int> kek,kek1;
signed main(){
    cin>>a>>b;
    ans=a;
    ans1=b;
    while(a>=9 && b>=0){
        kek.push_back(9);
        a-=9;
    }
    while(a>=0 && b>=0){
        kek.push_back(a);
        a-=a;
        b--;
    }
    if(a>9){
        cout<<"-1";
        return 0;

    }
    return 0;
}
