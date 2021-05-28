#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i=a; i < b; i++)
typedef long long ll;
typedef vector<int> vi;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}

void binary_search(vi v, int search) {
    bool flag = false;
    int high = v.size() - 1, low = 0, mid;

    while (low <= high)  {
        mid = (low+high)/2;

        if ( search == v[mid]) {
           flag = true;
           break;
        }

        else if ( search > v[mid]) {
           low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if (flag) {
       cout << mid << ' ';
    } else {
        cout << -1 << ' ';
    }
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;

    cin >> n;
    vi a(n);
    cin >> a;

    cin >> k;
    vi b(k);
    cin >> b;

    REP(i, 0, k)
        binary_search(a, b[i]);

    cout << '\n';

    return 0;
}
