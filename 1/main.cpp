#include <bits/stdc++.h>
using namespace std;

int main()
{
ifstream fin("input.txt");
ofstream fout("output.txt");
int odin=0, x; bool b=false;
int k; fin >> k;
vector <int> vec(k);
x = k-1;
for (int i=0; i<k ; i++){
    fin >> vec[i];
    if (vec[i] == 1){
        odin++;
    }
    if (vec[i] == x-1){
        b=true;
    }
}
if (b==true){
    fout << x-1;
} else {
    //cout << endl << odin << endl;
    if (odin*2+1 == k){
        fout << odin;
    } else if (k>2*odin+1){
        if (odin != 0){
            k-=(2*odin+1);
        }
        fout << odin+(k-1);
    } else {
        fout << k/2;
    }
}
return 0;
}
