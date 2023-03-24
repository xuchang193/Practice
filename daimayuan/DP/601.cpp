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

const int N = 20;

LL l, r;
int len, a[N];

LL dfs(int x, int limit) {

    int up = 9 ? 
    for (int i = 0; i <= up; i++) {

    }
}

LL cal(int x, int c) {
    while (x) a[++len] = x % 10, x /= 10;
}

void solution() {
    cin >> l >> r;
    for (int i = 0; i < 10; i++) cout << cal(r, i) - cal(l - 1, i); 
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
