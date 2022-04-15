#include <bits/stdc++.h>
using namespace std;
string s;
char matr[8][8];
int x,y,x2,y2;
bool a,b,c,d;
signed main(){
    cin>>s;
    x=s[0]-'a';
    y=s[1]-'1';
    cin>>s;
    x2=s[0]-'a';
    y2=s[1]-'1';
    matr[x][y]='k';
    matr[x2][y2]='r';
    if(abs(x-x2)<=2 && (y-y2)<=2){
        if(abs(x-x2)<=1 && abs(y-y2)<=1) c=1;
        else if(abs(x-x2)<=2 && abs(y-y2)<=2) d=1;
    }
    if(matr[x+2][y+1]=='r' || matr[x+2][y-1]=='r' || matr[x-2][y+1]=='r' || matr[x-2][y-1]=='r' || matr[x+1][y+2]=='r' || matr[x+1][y-2]=='r' || matr[x-1][y+2]=='r'|| matr[x-1][y-2]=='r')
        a=1;
    if((x2-4==x && y2+2==y) || (x2-4==x && y2-2==y) || (x2+4==x && y2+2==y) || (x2+4==x && y2-2==y) || (x2+2==x && y2+4==y) || (x2+2==x && y2-4==y) || (x2-2==x && y2+4==y) || (x2-2==x && y2-4==y)) b=1;
    /*for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cout<<matr[i][j];
        }
        cout<<'\n';
    }*/
    if(a==1) cout<<"Y";
        else cout<<"N";
    if(b==1) cout<<"Y";
        else cout<<"N";
    if(c==1) cout<<"Y";
        else cout<<"N";
    if(d==1) cout<<"Y";
        else cout<<"N";
    return 0;
}
