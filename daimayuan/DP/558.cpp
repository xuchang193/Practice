#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int mod = 1000003;
const double E = 1e-8;

const int N = 310;

int n;
LL a[N], f[N][N], s[N][N];

void solution() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        s[i][i] = a[i];
        for (int j = i - 1; j >= 1; j--) {
            s[j][i] = s[j + 1][i] * a[j] % mod;
        }
    }

    for (int len = 1; len <= n; len++) {
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            for (int k = l; k < r; k++) {
                f[l][r] = max(f[l][r], f[l][k] + f[k + 1][r] + (s[l][k] - s[k + 1][r]) * (s[l][k] - s[k + 1][r]));
            }
        }
    } 

    cout << f[1][n] << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
