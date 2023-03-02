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
int a[N];

void solution() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a, a + n);

    LL res = 0;
    for (int i = 0; i < n; i++) res += abs(a[i] - a[n >> 1]);
    cout << res << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
