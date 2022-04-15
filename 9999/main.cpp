#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define files ifstream cin("input.txt");ofstream cout("output.txt");
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool win[10000];
int i=9994,ans;
signed main()
{
    win[9998]=0;
    win[9999]=0;
    win[9997]=1;
    win[9996]=1;
    win[9995]=1;
    while(i>=9990){
        if(mas[i+1]==1 && mas[i+2]==1 && mas[i+3]==1) mas[i]=0;
        else mas[i]=1;
        i--;
    }
    i=9989;
    win[9989]=0;
    win[9979]=1;
    win[9969]=1;
    while(i>=9900){

    }
    return 0;
}
