/*
    Code by: KoKoDuDu
*/
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pll pair<int, int>

const int MOD = 1e9 + 7;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (auto c : s) {
        cnt += c == '-';
    }
    cout << (n - cnt) * (cnt / 2) * ((cnt + 1) / 2) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}