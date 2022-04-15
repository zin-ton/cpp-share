#include <bits/stdc++.h>
using namespace std;
long long n,now,ans;
int gcd(int a,int b){
int ans;
for(int i=1;i<=(min(a,b)/2)+1;++i){
    if(a%i==0 && b%i==0) ans=i;
}
return ans;
}
pair <int,int> a[int(1e5)];
signed main(){
cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i].first>>a[i].second;
        now=gcd(a[i].first,a[i].second);
        a[i].first/=now;
        a[i].second/=now;
        if(a[i].first==0) a[i].second=0;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;++i){
        if(a[i].first != a[i+1].first || a[i].second != a[i+1].second) ans++;//,cout<<a[i].first<<" "<<a[i].second<<'\n'<<a[i+1].first<<a[i+1].second<<'\n';
    }
    cout<<ans+1;
    return 0;
}
