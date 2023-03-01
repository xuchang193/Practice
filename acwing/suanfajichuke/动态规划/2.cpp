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

int f[N];
int n, m;

void solution() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int v, w;
        cin >> v >> w;
        for (int j = v; j <= m; j++) {
            f[j] = max(f[j], f[j - v] + w);
        }
    } 
    cout << f[m] << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
