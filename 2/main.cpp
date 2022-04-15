#include <bits/stdc++.h>

            using namespace std;

          int main() {

              ifstream fin ("input.txt");
              ofstream fout ("output.txt");
ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
                int n,m;cin>>n>>m;

                   vector <vector <double> > vec (n+2, vector <double> (m+2));
                   for(int i=1; i<=n; i++){
                    for (int j=1; j<=m; j++){
                        cin >> vec[i][j];

                    }
                   }


double sum=0, y ,x, r, s_other;
                   for(int i=1; i<=n; i++){
                    for (int j=1; j<=m; j++){
                            r = vec[i][j] + vec[i-1][j-1]/2 + vec[i][j-1]/2 + vec[i+1][j-1]/2 +  vec[i-1][j+1]/2
                            +  vec[i+1][j+1]/2 + vec[i][j+1]/2 + vec[i-1][j]/2 + vec[i+1][j]/2;
                    if (sum <= r){
                        sum = r; x=i, y=j;
                    }
                    }
                   }

vec[x][y] = -1001; vec[x-1][y-1]= -1001;  vec[x][y-1]= -1001;  vec[x+1][y-1]= -1001;
                             vec[x-1][y+1]= -1001;   vec[x+1][y+1]= -1001;  vec[x][y+1]= -1001;  vec[x-1][y]= -1001;  vec[x+1][y]= -1001;

             double ans=sum; sum=0;

                for(int i=1; i<=n; i++){
                    for (int j=1; j<=m; j++){
if (vec[i][j]!=-1001 && vec[i-1][j-1]!=-1001 && vec[i][j-1]!=-1001 && vec[i+1][j-1]!=-1001 &&  vec[i-1][j+1]!=-1001 &&
      vec[i+1][j+1]!=-1001 && vec[i][j+1]!=-1001 && vec[i-1][j]!=-1001 && vec[i+1][j]!=-1001){
       r = vec[i][j] + vec[i-1][j-1]/2 + vec[i][j-1]/2 + vec[i+1][j-1]/2 +  vec[i-1][j+1]/2
                            +  vec[i+1][j+1]/2 + vec[i][j+1]/2 + vec[i-1][j]/2 + vec[i+1][j]/2;
                    if (sum <= r){
                        sum = r; x=i, y=j;
                    }
}

                    }
                    }
                    cout << fixed;

cout.precision(1);
cout << sum+ans;
            return 0;
            }
