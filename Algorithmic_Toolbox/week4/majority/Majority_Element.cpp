#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i < b; i++)

int count(long long arr[], long long  x, long long n) {
    long long *low = lower_bound(arr, arr+n, x);
    if (low == (arr + n) || *low != x) {
       return 0;
    }

    long long *high = upper_bound(low, arr+n, x);

    return high-low;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, c=0;
    bool flag = false;
    cin >> n;

    long long arr[n];
    REP(i,0, n) cin >> arr[i];
    sort(arr, arr+n);

    REP(i, 0, n) {
        c = count(arr, arr[i], n);
        if (c > n/2) {
           flag = true;
           break;
        }
    }
    if (flag) {
       cout << 1 << '\n';
    } else {
        cout << 0  << '\n';
    }

}

