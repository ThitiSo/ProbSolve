#include <iostream>
#include <map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    map<long, long> first;

    int loop;
    cin >> loop;

    for (int i = 0; i < loop; i++) {
        int mode;
        cin >> mode;

        if (mode == 1) {
            long type, amount;
            cin >> type >> amount;
            first[type] += amount;
        }

        else if (mode == 2) {
            long type;
            cin >> type;
            if (first.find(type) == first.end())
                cout << 0 << "\n";
            else
                cout << first[type] << "\n";
        }

        else { 
            long type, amount;
            cin >> type >> amount;

            if (first.find(type) == first.end()) {
                cout << 0 << "\n";
            }
            else if (first[type] < amount) {
                cout << first[type] << "\n";
                first[type] = 0;
            }
            else {
                first[type] -= amount;
                cout << amount << "\n";
            }
        }
    }

    return 0;
}
