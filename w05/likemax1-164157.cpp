#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> first;
    map<int, vector<int>> second;
    int loop;
    int mx=0;
    cin >> loop;
    for(int i = 0; i < loop; i ++){
        int in;
        cin >> in;
        if(first.find(in) == first.end()){
            first[in]=1;
            second[1].push_back(in);
            mx = max(mx, 1);
        }else{   
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
        cout << second[mx].back() << "\n";
    }

    return 0;
}
