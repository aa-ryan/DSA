#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;


int main()
{
    std::ios_base::sync_with_stdio(false);

    lli n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl << 1 << endl;
    }

    std::vector<lli> v;

    lli temp = n;
    for (lli i = 1; i < n; ++i) {
        if (2 * i < temp) {
            v.pb(i);
            temp -= i;
        } else{
            v.pb(temp);
            break;
        }
    }

    cout << v.size() << endl;
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}

