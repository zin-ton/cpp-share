#include <bits/stdc++.h>
using namespace std;
int miin,maax,n,k,s,kek,now,kek2=0,xz;
bool mas[200001];
int main()
{
    //ifstream cin ("input.txt");
    //ofstream cout("output.txt");
    cin>>n>>k>>s;
    xz=s;
    for(int i=0;i<k;++i){
        cin>>kek;
        mas[kek]=1;
    }
    while(kek2<n){
        if(mas[kek2+s]!=1){
            kek2+=s;
            miin++;
        }
        else{
            while(mas[kek2+xz]==1){
                xz--;
            }
            kek2+=xz;
            miin++;
        }
        xz=s;
    }
    kek2=0;
    xz=1;
    while(kek2<n){
        if(mas[kek2+1]!=1){
            kek2+=1;
            maax++;
        }
        else{
            while(mas[kek2+xz]==1){
                xz++;
            }
            kek2+=xz;
            maax++;
        }
        xz=1;
    }
    cout<<miin<<" "<<maax;
    return 0;
}
