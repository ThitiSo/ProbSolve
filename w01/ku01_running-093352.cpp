#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, K;
    long long mn = 1000000000000;
    long long count = 0;

    cin >> N >> K;

    vector<long long> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (a[i] < mn) mn = a[i];
    }

    long long roundfull = mn * K;

    for (int i = 0; i < N; i++) {
        long long rounds = roundfull / a[i];
        if (rounds >= K - 1) {
            count++;
        }
    }

    cout << count;
    return 0;
}
