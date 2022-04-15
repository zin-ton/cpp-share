#include <bits/stdc++.h>

    using namespace std;

    int main()
    {
    ifstream fin("input.txt");
            ofstream fout ("output.txt");


        int n, maxx, m;
        cin >>n;
        vector <int>   a(n);
        for (int i =0 ; i<n; i++){
            cin >> a[i];
 }
 maxx=0;
    for (int i = 0 ; i<n; i++){
            if(maxx <= a[i]){
                maxx= a[i];
                m=i;            }
    }
 cout << m+1;
    return 0;
}
