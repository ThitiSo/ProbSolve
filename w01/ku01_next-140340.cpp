#include <iostream>
#include <vector>
using namespace std;

int main() {
    int pep;
    cin >> pep;

    vector<int> sender(pep);
    for (int i = 0; i < pep; i++) {
        cin >> sender[i];
        sender[i]--; 
    }

    vector<int> rec(pep, 0);
    int maxCycle = 1;

    for (int i = 0; i < pep; i++) {
        if (!rec[i]) {
            int cur = i;
            int count = 0;

            while (!rec[cur]) {
                rec[cur] = 1;
                cur = sender[cur];
                count++;
            }

            if (count > maxCycle)
                maxCycle = count;
        }
    }

    cout << maxCycle;
    return 0;
}
