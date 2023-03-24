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

const int N = 1010;

int n, m;
int h[N], e[N], ne[N], w[N], idx;
int f[N];

void add(int a, int b, int c) {
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

void solution() {
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        add(b, a, c);
    } 

    memset(f, 0x3f, sizeof f);
    f[1] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = h[i]; ~j; j = ne[j]) {
            int son = e[j];
            if (son < i) f[i] = min(f[i], f[son] + w[j]);
        }
    }
    
    cout << f[n] << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
