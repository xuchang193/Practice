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

int n;
int a[N];
int f[N][N];

void solution() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 1; j--) {
            if (a[i] == a[j]) f[i][j] = max(f[i][j], f[i - 1][j + 1] + 2);
        }
    }
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
