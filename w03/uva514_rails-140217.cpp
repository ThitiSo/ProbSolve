#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {

        while (true) {
            vector<int> arr(n);
            cin >> arr[0];

            if (arr[0] == 0) {
                cout << "\n";
                break;
            }

            for (int i = 1; i < n; i++)
                cin >> arr[i];

            stack<int> store;
            int inc = 1;
            bool A = true;

            for (int i = 0; i < n; i++) {
                int target = arr[i];

                while (inc <= n && (store.empty() || store.top() != target)) {
                    store.push(inc);
                    inc++;
                }

                if (store.top() != target) {
                    A = false;
                    break;
                }

                store.pop();
            }

            if (A)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
