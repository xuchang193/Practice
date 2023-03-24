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
int f[N];
int h[N], e[N], ne[N], idx;

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int dfs(int root) {
    if (f[root] != -1) return f[root];
    int& t = f[root];
    t = 1;

    for (int i = h[root]; ~i; i = ne[i]) {
        int j = e[i];
        t += dfs(j);
    }

    return t;
}

void solution() {
    cin >> n;
    memset(h, -1, sizeof h);
    for (int i = 2; i <= n; i++) {
        int a, b = i;
        cin >> a;
        add(a, b);
    }

    memset(f, -1, sizeof f);
    dfs(1);

    for (int i = 1; i <= n; i++) cout << f[i] << ' ';
    cout << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
