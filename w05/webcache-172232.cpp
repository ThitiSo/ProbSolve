#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <deque>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    deque<int> cacheQueue;
    unordered_set<int> cacheSet;
    int miss = 0;

    for(int i = 0; i < M; i++){
        int in;
        cin >> in;

        if(cacheSet.find(in) == cacheSet.end()){ 
            miss++;
            if((int)cacheQueue.size() == N){      
                int old = cacheQueue.front();
                cacheQueue.pop_front();
                cacheSet.erase(old);
            }
            cacheQueue.push_back(in);
            cacheSet.insert(in);
        }
    }

    cout << miss;
    return 0;
}
