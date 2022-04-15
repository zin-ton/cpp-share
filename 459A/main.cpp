#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
ll x,y,x2,y2,delta;
signed main()
{
    cin>>x>>y>>x2>>y2;
    if(x==x2 && y!=y2){
        delta=y-y2;
        return cout<<x+delta<<" "<<y<<" "<<x+delta<<" "<<y2,0;
    }
    else{
        if(x!=x2 && y==y2){
        delta=x-x2;
        return cout<<x<<" "<<y+delta<<" "<<x<<" "<<y2+delta,0;
        }
        else{
            if(abs(x-x2)==abs(y-y2) && x!=x2){
                delta=abs(x-x2);
                if(x>x2) return cout<<x-delta<<" "<<y<<" "<<x2+delta<<" "<<y2,0;
                else return cout<<x+delta<<" "<<y<<" "<<x2-delta<<" "<<y2,0;
            }
            else return cout<<"-1",0;
        }
    }
    return 0;
}
