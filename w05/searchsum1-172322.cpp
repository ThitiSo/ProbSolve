#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<long long> pref(N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        sum += x;
        pref[i] = sum;
    }

    int block = 2000;
    int B = (N + block - 1) / block;
    vector<long long> blockMax(B);

    for (int b = 0; b < B; b++) {
        int idx = min(N - 1, b * block + block - 1);
        blockMax[b] = pref[idx];
    }

    for (int q = 0; q < K; q++) {
        long long k;
        cin >> k;

        int b = 0;
        while (b < B && blockMax[b] <= k) b++;

        int start = max(0, (b - 1) * block);
        int ans = start;

        while (ans < N && pref[ans] <= k) ans++;

        cout << ans << "\n";
    }

    return 0;
}
