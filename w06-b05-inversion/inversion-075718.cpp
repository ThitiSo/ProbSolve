#include <bits/stdc++.h>
using namespace std;

long long merge(vector<long long>& a, int l, int m, int r) {
    vector<long long> t;
    int i = l, j = m + 1;
    long long cnt = 0;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            t.push_back(a[i++]);
        } else {
            t.push_back(a[j++]);
            cnt += (m - i + 1);
        }
    }

    while (i <= m) t.push_back(a[i++]);
    while (j <= r) t.push_back(a[j++]);

    for (int k = 0; k < t.size(); k++)
        a[l + k] = t[k];

    return cnt;
}

long long countinv(vector<long long>& a, int l, int r) {
    if (l >= r) return 0;

    int m = (l + r) / 2;
    return countinv(a, l, m)
         + countinv(a, m + 1, r)
         + merge(a, l, m, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << countinv(a, 0, n - 1);
    return 0;
}
