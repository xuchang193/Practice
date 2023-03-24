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

const int N = 510, M = 1010;

int n, m;
int w[N][M], f[N][M];

void solution() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) 
            cin >> w[i][j];
    
    for (int i = 1; i <= n; i++) 
        for (int j = 0; j <= m; j++)
            for (int k = 0; k <= j; k++) 
                f[i][j] = max(f[i][j], f[i - 1][j - k] + w[i][k]);

    cout << f[n][m] << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
