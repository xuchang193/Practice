#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int mod = 1e9+7;
const double E = 1e-8;

const int N = 510;

int n;
int a[N], f[N][N];

void solution() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    memset(f, 0x3f, sizeof f);
    for (int i = 1; i < n; i++) f[i][i + 1] = 0;

    for (int len = 1; len <= n; len++) {
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            for (int k = l + 1; k < r; k++) {
                f[l][r] = min(f[l][r], f[l][k] + f[k][r] + a[k] * a[l] * a[r]);
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
