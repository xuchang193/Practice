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

const int N = 2010;

int f[N];
int n, m;

void solution() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int v, w, s;
        cin >> v >> w >> s;
        for (int k = 1; k <= s; k *= 2) {
            for (int j = m; j >= k * v; j--) {
                f[j] = max(f[j], f[j - k * v] + k * w);
            }
            s -= k;
        }
        if (s) {
            for (int j = m; j >= s * v; j--) f[j] = max(f[j], f[j - s * v] + s * w);
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
