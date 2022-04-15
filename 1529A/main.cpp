#include <bits/stdc++.h>
using namespace std;

typedef long long                                        ll;
typedef long double                                      ld;

const int xn = 1e2 + 10;
const int inf = 1e9 + 10;


int qq, n, a[xn], mn, ans;

int main(){
	cin >> qq;
	while (qq --){
		cin >> n, mn = inf, ans = 0;
		for (int i = 1; i <= n; ++ i)
			cin >> a[i], mn = min(mn, a[i]);
		for (int i = 1; i <= n; ++ i)
			ans += a[i] != mn;
		cout << ans << endl;
	}

	return 0;
}
