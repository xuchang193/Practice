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

const int N = 110;

int n, m;
int f[N];

void solution() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int v, w, l;
        cin >> v >> w >> l;
        for (int j = m; j >= 0; j--) {
            for (int k = 0; k <= l; k++) {
                if (j >= k * v) f[j] = max(f[j], f[j - k * v] + k * w);
            }
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
