#include <bits/stdc++.h>
#define pb push_back

using namespace std;

bool greaterOrequal (const string &a, const string &b) {
    return  (stoi(a + b) > stoi(b + a)) ;
}

string max_salary(vector<string> v) {
    stringstream sal;
    sort(v.begin(), v.end(), greaterOrequal);
    for (int i = 0; i < v.size(); ++i) {
        sal << v[i];
    }
    return sal.str();
}


int main() {
    int n;
    cin >> n;
    std::vector<string> v(n);
    for (auto &i : v) {
        cin >> i;
    }

    cout << max_salary(v);
}
