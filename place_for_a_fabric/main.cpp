#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define files ifstream cin("input.txt");ofstream cout("output.txt");
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int m,n,now,ans=INT_MAX;
signed main()
{
    //fast
    cin>>n>>m;
    vector <vector<int> > matr(n, vector<int> (m));//(0,vector<int>(0));

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>matr[i][j];
        }
    }
    for(int i=0;i<n-2;++i){
        for(int j=0;j<m-2;++j){
            now=matr[i][j]+matr[i][j+1]+matr[i][j+2]+matr[i+1][j]+matr[i+1][j+1]+matr[i+1][j+2]+matr[i+2][j]+matr[i+2][j+1]+matr[i+2][j+2];
            if(now<ans) ans=now;
        }
    }
    cout<<ans;
    return 0;
}
