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

const int N = 60;

int n;
int f[N];

void solution() {
    cin >> n;
    f[0] = 1;
    f[1] = 1;

    for (int i = 2; i <= n; i++) f[i] = f[i - 1] + f[i - 2];

    cout << f[n] << endl; 
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
