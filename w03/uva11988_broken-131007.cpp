#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {


    string s;
    while (getline(cin, s)) {

        deque<char> l, r;
        bool aaa = false;   

        for (char c : s) {
            if (c == '[') {
                while (!l.empty()) {
                    r.push_front(l.back());
                    l.pop_back();
                }
                aaa = true;
            }
            else if (c == ']') {
                while (!l.empty()) {
                    r.push_front(l.back());
                    l.pop_back();
                }
                aaa = false;
            }
            else {
                if (aaa)
                    l.push_back(c);
                else
                    r.push_back(c);
            }
        }

        while (!l.empty()) {
            r.push_front(l.back());
            l.pop_back();
        }

        for (char c : r) cout << c;
        cout << "\n";
    }

    return 0;
}
