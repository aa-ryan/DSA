#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += ((long long)a[i] * b[i]);
    }

    cout << ans << endl;
}

int main()
{
        solve();

    return 0;
}

