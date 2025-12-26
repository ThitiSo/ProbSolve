#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];


    vector<int> mincon(N, 999999999);

    for(int sz = 1; sz <= N; sz++) {
        int sum = 0;
        for(int i = 0; i < sz; i++) sum += a[i];
        mincon[sz-1] = sum;

        for(int i = sz; i < N; i++) {
            sum = sum - a[i-sz] + a[i];
            mincon[sz-1] = min(mincon[sz-1], sum);
        }
    }


    for(int q = 0; q < K; q++) {
        int in2;
        cin >> in2;
        int ans = 0;
        for(int j = N-1; j >= 0; j--) {
            if(mincon[j] <= in2) {
                ans = j+1;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
