#include <bits/stdc++.h>

#define int long long
#define IOS ios_base::sync_with_stdio(0),cin.tie(0)
using namespace std;
double data[100000];

signed main() {
    IOS;
    int t;
    cin >> t;
    cout.precision(6);
    while (t--) {
        int n;
        cin >> n;
        double sum1 = 0.0, sum2 = 0.0;
        for (int i = 0; i < n; i++)
            cin >> data[i], sum1 += data[i];
        sort(data, data + n);
        double ans = -1e6;
        for (int i = 0; i < n - 1; i++) {
            sum2 += data[i];
            sum1 -= data[i];
            ans = max(ans, (double) sum1 / (double) (n - i - 1) + (double) sum2 / (double) (i + 1));
        }
        cout.precision(10);
        cout << ans << endl;

    }


}
