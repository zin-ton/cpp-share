#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define files ifstream cin("input.txt");ofstream cout("output.txt");
string black,white;
bool a=0,b=0,c=0,d=0;
int x,y,x2,y2,now,now2;
signed main()
{
    cin>>black>>white;
    x=int(black[0])-96;
    x2=int(white[0])-96;
    y=int(black[1])-'0';
    y2=int(white[1])-'0';
    if((abs(x-x2)==2 && abs(y-y2)==1) || (abs(x-x2)==1 && abs(y-y2)==2)){
        cout<<"YN";
        if((abs(x-x2)==1 && abs(y-y2)==1) || (abs(x-x2)==1 && abs(y-y2)==0) || (abs(x-x2)==0 && abs(y-y2)==1)) return cout<<"YN",0;
        else if((abs(x-x2)==2 && abs(y-y2)==0) || (abs(x-x2)==0 && abs(y-y2)==2) || (abs(x-x2)==2 && abs(y-y2)==2) || (abs(x-x2)==2 && abs(y-y2)==1) || (abs(x-x2)==1 && abs(y-y2)==2)) return cout<<"NY",0;
    }
    else{
        if()
    }
    return 0;
}
