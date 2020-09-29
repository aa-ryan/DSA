#include <bits/stdc++.h>
#define pb push_back

using namespace std;
int solve(int d, int m, vector<int> & pumps);
int min_refills(int d, int m, vector<int> & pumps, int start, int cnt);

int main() {
    int d = 0, m = 0, n = 0;
    cin >> d >> m >> n;

    vector<int> pumps(n);
    for (auto &i : pumps) {
        cin >> i;
    }

    cout << solve(d, m, pumps) << "\n";

    return 0;
}

int solve(int d, int m, vector<int> & pumps) {
    return min_refills(d, m, pumps, 0, 0);
}


int min_refills(int d, int m, vector<int> & pumps, int start, int cnt) {
    if ((start + m) >= d) {
        return cnt;
    }
    if (pumps.size() == 0) {
        return -1;
    }
    int old_start = start;
    for (int i = 0; i < pumps.size(); i++) {
        if (pumps[i] <= (start + m)) {
            old_start = pumps[i];
        } else {
            if (i != 0) {
                pumps.erase(pumps.begin(), pumps.begin() + i);
            }
            else {
                pumps.erase(pumps.begin());
            }
            return min_refills(d, m, pumps, old_start, cnt+1);
        }
    }
    return (old_start + m) >= d ? cnt+1 : -1;
}
