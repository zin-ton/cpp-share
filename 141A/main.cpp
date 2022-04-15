#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
string s,s2,s3;
int mas[100];
signed main(){
    for(int i=0;i<100;++i){
        mas[i]=0;
    }
    cin>>s>>s2>>s3;
    for(int i=0;i<s.size();++i){
        mas[int(s[i])]--;
    }
    //cin>>s;
    for(int i=0;i<s2.size();++i){
        mas[int(s2[i])]--;
    }
    //cin>>s;
    for(int i=0;i<s3.size();++i){
        mas[int(s3[i])]++;
    }
    for(int i=65;i<91;++i){
        if(mas[i]<0) return cout<<"NO",0;
    }
    cout<<"YES";
    return 0;
}
