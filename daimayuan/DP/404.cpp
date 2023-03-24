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

int n, m;
int happy[N];
LL f[N][N][2];
int h[N], e[N], ne[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int root) {
    for (int i = h[root]; ~i; i = ne[i]) {
        int son = e[i];
        dfs(son);
        
        for (int j = m; j >= 0; j--) 
            for (int k = 0; k <= j; k++) {
                f[root][j][1] = max(f[root][j][1], f[root][j - k][1] + f[son][k][0]);
                f[root][j][0] = max(f[root][j][0], f[root][j - k][0] + max(f[son][k][0], f[son][k][1]));
            }
    }

    for (int j = m; j > 0; j--) f[root][j][1] = f[root][j - 1][1] + happy[root];
    f[root][0][1] = 0;
}

void solution() {
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 2; i <= n; i++) {
        int x; 
        cin >> x;
        add(x, i);
    }
    for (int i = 1; i <= n; i++) cin >> happy[i];

    dfs(1);

    cout << max(f[1][m][1], f[1][m][0]) << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
