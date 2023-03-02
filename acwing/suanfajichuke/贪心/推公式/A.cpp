#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 50010;

int n;
PII a[N];

void solution() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int w, s;
        cin >> w >> s;
        a[i] = {w + s, w};
    }
    
    sort(a, a + n);
    
    int sum = 0, res = -2e9;
    for (int i = 0; i < n; i++) {
        int w = a[i].second, s = a[i].first - w;
        res = max(res, sum - s);
        sum += w;
    }
    
    cout << res << endl;
}

int main() {
    solution();
    return 0;
}