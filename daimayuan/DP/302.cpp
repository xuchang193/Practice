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
string s;
int f[N][N];

void solution() {
    cin >> n >> s;

    for (int len = 1; len <= n; len++) {
        for (int l = 0; l + len - 1 < n; l++) {
            int r = l + len - 1;
            if (s[l] == '(' && s[r] == ')' || s[l] == '[' && s[r] == ']') {
                f[l][r] = max(f[l][r], f[l + 1][r - 1] + 2);
            }
            for (int k = l; k < r; k++) {
                f[l][r] = max(f[l][r], f[l][k] + f[k + 1][r]);
            }
        }
    }
    cout << f[0][n - 1] << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
