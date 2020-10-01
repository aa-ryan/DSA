#include <bits/stdc++.h>
#define pb push_back
#define lli long long int

using namespace std;


bool sortbynextelement(const tuple<lli, lli>& a,
              const tuple<lli, lli>& b)
{
    return (get<1>(a) < get<1>(b));
}

int main()
{
    lli n;
    cin >> n;

    vector<tuple<lli, lli> > v;

    int j = n;
    while (j--){
        lli a, b;
        cin >> a >> b;
        v.pb(make_tuple(a, b));
    }

    sort(v.begin(), v.end(), sortbynextelement);

    int index = 0;
    std::vector<lli> a;

    while (index < n) {
        lli current = get<1>(v[index]);
        while(index < n-1 && current >= get<0>(v[index+1])) {
            index++;
        }
        a.pb(current);
        index++;
    }

    cout << a.size() << endl;

    for (auto i : a) {
        cout << i << ' ';
    }
    cout << endl;
}

