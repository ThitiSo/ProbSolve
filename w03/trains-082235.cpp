#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<int, vector<long>> dict;
    int t;
    cin >> t;

    int max_index = 0;

    for (int i = 0; i < t; i++) {
        char NM;
        long n1, n2;
        cin >> NM >> n1 >> n2;

        if (NM == 'N') {
            dict[n2].push_back(n1);
            if (n1 > max_index) max_index = n1;
        } else { 
            if (n1 > max_index) max_index = n1;
            if (n2 > max_index) max_index = n2;

            vector<long> cpy = dict[n1];
            for (size_t  j = 0; j < cpy.size(); j++) {
                dict[n2].push_back(cpy[j]);
            }
            dict[n1].clear();
        }
    }


    for (int i = 0; i <= max_index; i++) {
        if (dict.find(i) != dict.end()) {
            for (size_t  j = 0; j < dict[i].size(); j++) {
                cout << dict[i][j] << "\n";
            }
        }

    }

    return 0;
}
