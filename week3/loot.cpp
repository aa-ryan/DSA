#include <bits/stdc++.h>
#define pb push_back

using namespace std;

//desendinig order
bool sortbythirdelement(const tuple<double, double, double>& a,
              const tuple<double, double, double>& b)
{
    return (get<2>(a) > get<2>(b));
}

int main()
{
    double n, weight;
    cin >> n >> weight;
    vector<tuple<double, double, double> > v;

    int j = n;
    while (j--) {

        double vi, wi;
        cin >> vi >> wi;
        v.pb(make_tuple(vi, wi, vi/wi));
    }

    sort(v.begin(), v.end(), sortbythirdelement);
    double res = 0;

    for (int i = 0; i < n; i++) {

        if (weight == 0) {
            break;
        } else {
            /* double wii = get<1>(v[i]); */
            double a = min(get<1>(v[i]), weight);

            /* double div = get<2>(v[i]); */
            res += a * (get<2>(v[i]));

            get<1>(v[i]) -= a;
            weight -= a;
        }
    }
    cout.precision(10);
    cout << res << endl;
}
