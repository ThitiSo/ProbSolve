#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s1;
    vector<int> s2;

    int i1, i2;
    cin >> i1 >> i2;

    for (int i = 0; i < i1; i++) {
        int in;
        cin >> in;
        s1.insert(in);
    }

    for (int i = 0; i < i2; i++) {
        int in;
        cin >> in;
        s2.push_back(in);
    }

    for (int i = 0; i < i2; i++) {
        int x = s2[i];

        auto it = s1.lower_bound(x);
        int best;

        if (it == s1.begin()) {
            best = *it;
        }
        else if (it == s1.end()) {
            best = *prev(it);
        }
        else {
            int a = *it;
            int b = *prev(it);

            if (abs(a - x) < abs(b - x)) {
                best = a;
            } 
            else {
                best = b;
            }
        }

        cout << best << "\n";
    }

    return 0;
}
