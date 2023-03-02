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

int n, st, ed;
struct Node {
    int l, r;

    bool operator< (const struct Node& W) const {
        return l < W.l;
    }
}w[N];

void solution() {
    cin >> st >> ed >> n;
    for (int i = 0; i < n; i++) {
        cin >> w[i].l >> w[i].r;
    }

    sort(w, w + n);

    int res = 0;
    bool success = false;
    for (int i = 0; i < n; i++) {
        int j = i, r = -2e9;
        while (j < n && w[j].l <= st) {
            r = max(r, w[j].r);
            j++;
        }

        if (r < st) break;

        res++;
        if (r >= ed) {
            success = true;
            break;
        } 
        
        st = r;
        i = j - 1;
    }

    if (!success) res = -1;
    cout << res << endl;
}

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    solution();
    return 0;
}
