#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int mx = 0;
    map<int, int> first;
    map<int, vector<int>> second;

    int loop;
    cin >> loop;

    for (int i = 0; i < loop; i++) {
        int in;
        cin >> in;

        if (first.find(in) == first.end()) {
            first[in] = 1;
            second[1].push_back(in);
            mx = max(mx, 1);
        } 
        else {
            int old = first[in];
            int now = old + 1;

            second[old].erase(
                remove(second[old].begin(), second[old].end(), in),
                second[old].end()
            );

            first[in] = now;
            second[now].push_back(in);

            mx = max(mx, now);
        }
    }

    for (int i = mx; i > 0; i--) {
        sort(second[i].begin(), second[i].end());
        for (int x : second[i]) {
            cout << x << "\n";
        }
    }

    return 0;
}
