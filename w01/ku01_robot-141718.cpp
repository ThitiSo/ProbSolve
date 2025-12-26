#include <iostream>
using namespace std;

int main() {
    int wh, bh, wb, bb;
    cin >> wh >> bh >> wb >> bb;

    int same, dif;
    cin >> same >> dif;

    auto run = [&](bool sameFirst) {
        int h1 = wh, h2 = bh, b1 = wb, b2 = bb;
        int s = same, d = dif;
        int finish = 0;

        if (sameFirst) {
            int k = min(h1, b1);
            int t = min(k, s);
            finish += t;
            h1 -= t; b1 -= t; s -= t;

            k = min(h2, b2);
            t = min(k, s);
            finish += t;
            h2 -= t; b2 -= t; s -= t;

            k = min(h1, b2);
            t = min(k, d);
            finish += t;
            h1 -= t; b2 -= t; d -= t;

            k = min(h2, b1);
            t = min(k, d);
            finish += t;
        } 
        else {
            int k = min(h1, b2);
            int t = min(k, d);
            finish += t;
            h1 -= t; b2 -= t; d -= t;

            k = min(h2, b1);
            t = min(k, d);
            finish += t;
            h2 -= t; b1 -= t; d -= t;

            k = min(h1, b1);
            t = min(k, s);
            finish += t;
            h1 -= t; b1 -= t; s -= t;

            k = min(h2, b2);
            t = min(k, s);
            finish += t;
        }

        return finish;
    };

    int ans1 = run(true);
    int ans2 = run(false);

    cout << max(ans1, ans2);
    return 0;
}
