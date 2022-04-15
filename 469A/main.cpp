#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
bool mas[101],kek=0;
int n,p,k,now;
signed main()
{
    for(int i=0;i<101;++i) mas[i]=0;
    mas[0]=1;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;++i){
        cin>>now;
        mas[now]=1;
    }
    cin>>k;
    for(int i=0;i<k;++i){
        cin>>now;
        mas[now]=1;
    }
    for(int i=0;i<=n;++i){
        if(mas[i]==0) return cout<<"Oh, my keyboard!",0;
    }
    cout<<"I become the guy.";
    return 0;
}
