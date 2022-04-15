#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
int  white[8];
int black[8];
string s;
int n,ans=INT_MAX;
signed main()
{
    fast_io
    files
    cin>>n;
    getline(cin,s);
    //getline(cin,s);
    for(int j=0;j<n;++j){
        getline(cin,s);
        if(s=="white pawn") white[0]++;
        if(s=="white knight") white[1]++;
        if(s=="white bishop") white[2]++;
        if(s=="white rook") white[3]++;
        if(s=="white queen") white[4]++;
        if(s=="white king") white[5]++;
        if(s=="black pawn") black[0]++;
        if(s=="black knight") black[1]++;
        if(s=="black bishop") black[2]++;
        if(s=="black rook") black[3]++;
        if(s=="black queen") black[4]++;
        if(s=="black king") black[5]++;
    }
    /*for(int i=0;i<6;++i){
        cout<<white[i]<<" "<<black[i]<<'\n';
    }*/
    white[0]/=8;
    black[0]/=8;
    white[1]/=2;
    white[2]/=2;
    white[3]/=2;
    black[1]/=2;
    black[2]/=2;
    black[3]/=2;
    for(int i=0;i<6;++i){

        if(black[i]<ans) ans=black[i];
        if(white[i]<ans) ans=white[i];
        //cout<<white[i]<<" "<<black[i]<<'\n';
    }
    cout<<ans;
    return 0;
}
