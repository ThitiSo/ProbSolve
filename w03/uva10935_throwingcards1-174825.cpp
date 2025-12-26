#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        deque<int> d;
        for (int i = 1; i <= n; i++) d.push_back(i);

        cout << "Discarded cards:";

        while (d.size() > 1) {
            cout << " " << d.front();
            d.pop_front();

            if (d.size() > 1) cout << ",";

            d.push_back(d.front());
            d.pop_front();
        }

        cout << "\nRemaining card: " << d.front() << "\n";
    }

    return 0;
}
