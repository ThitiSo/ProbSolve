#include "cave.h"
#include <vector>
using namespace std;

void exploreCave(int N) {
    vector<int> S(N, 0);
    vector<int> D(N, -1);
    vector<int> A(N, 0);
    vector<int> B;

    for (int door = 0; door < N; door++) {

        for (int i = 0; i < N; i++) {
            if (A[i] == 0) {
                S[i] = 1;
            }
        }

        int trt = tryCombination(S);
        int doorv;

        if (trt == -1 || trt > door) {
            doorv = 1;
        } else {
            doorv = 0;
        }

        B.clear();
        for (int i = 0; i < N; i++) {
            if (A[i] == 0) {
                B.push_back(i);
            }
        }

        while (B.size() > 1) {

            int half = B.size() / 2;

            for (int i = 0; i < B.size(); i++) {
                if (i < half) {
                    S[B[i]] = doorv;
                } else {
                    S[B[i]] = 1 - doorv;
                }
            }

            trt = tryCombination(S);

            if (trt == -1 || trt > door) {
                B.resize(half);
            } else {
                B.erase(B.begin(), B.begin() + half);
            }
        }

        int sw = B[0];
        A[sw] = 1;
        S[sw] = doorv;
        D[door] = sw;
    }

    answer(S, D);
}

