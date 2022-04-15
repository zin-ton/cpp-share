#include <bits/stdc++.h>
using namespace std;
int t,n,k1,k2,w,b,now;
string s;
bool a;
signed main(){
    cin>>t;
    for(int k=0;k<t;++k){
        cin>>s;
        if(s.size()==1 && s[0]=='a'){
            a=0;
        }
        else{
                if(s.size()==1 && s[0]!='a'){
                    cout<<"YES"<<'\n';
                    cout<<s<<'a'<<'\n';
                    a=1;
                }
                else{
                    for(int i=s.size()-1;i>=s.size()/2;--i){
            if(s[i]!='a'){
                s.insert(0+i,string("a"));
                cout<<"YES"<<'\n';
                cout<<s<<'\n';
                a=1;
                break;
            }
                }

        }
        }

        if(s[0]!='a' && a!=1){
         cout<<"YES"<<'\n';
         cout<<s<<'a';
         a=1;
         cout<<'\n';
        }
        if(a==0) cout<<"NO"<<'\n';
        a=0;
    }
    return 0;
}
