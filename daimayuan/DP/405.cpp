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

const int N = 100010;

int n;
int f[N][2];
int h[N], e[N], ne[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int root) {
    f[root][1] = 1;
    for (int i = h[root]; ~i; i = ne[i]) {
        int j = e[i];
        dfs(j);
        f[root][0] += f[j][1];
        f[root][1] += min(f[j][1], f[j][0]);
    }
}

void solution() {
    cin >> n;
    memset(h, -1, sizeof h);
    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        add(x, i);
    } 

    dfs(1);

    cout << min(f[1][0], f[1][1]) << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
