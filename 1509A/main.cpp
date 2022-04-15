#include <bits/stdc++.h>
using namespace std;
long long a,t,n,ans,nechet,chet;
int mas[2000];
signed main(){
    cin>>t;
    for(int k=0;k<t;++k){
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>mas[i];
        }
       // cout<<'\n';
        for(int i=0;i<n;++i){
            if(mas[i]%2==1) cout<<mas[i]<<" ";

        }
        for(int i=0;i<n;++i){
            if(mas[i]%2==0) cout<< mas[i]<<" ";
        }
    }
    return 0;
}
