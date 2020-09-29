#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int count = 0;

 while (t != 0) {
     if (t - 10 >=  0) {
         t -= 10;
     } else if (t - 5 >= 0) {
         t -= 5;
     } else {
         t -= 1;
     }
     count++;
 }
 cout << count << endl;
}

int main()
{
    int t;
    cin >> t;

        solve(t);

    return 0;
}

