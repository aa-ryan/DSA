#include<bits/stdc++.h>
using namespace std;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(auto &i:a)in>>i;
    return in;
}


int main() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    cin >> v;

    for (int i = 0; i < n; ++i) {
       int c = count(v.begin(), v.end(), v[i]);
           if (c > n/2) {
               cout << 1 << '\n';
               return 0;
           }
    }
    cout << 0 << '\n';
    return 0;
}
