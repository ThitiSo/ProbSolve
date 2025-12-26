#include <iostream>
#include "probelib.h"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
cin.tie(NULL);
    int N  =  probe_init();
    int call =0;
    int start = 0;
    int end = N-1;
    int tres=0;
    while (start < end) {
    int mid = start + (end - start) / 2;

    if (probe_check(start, mid)) {
        end = mid;
    } else {
        start = mid + 1;
    }
}

probe_answer(start);


    
    return 0;
}
