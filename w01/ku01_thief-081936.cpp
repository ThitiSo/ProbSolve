#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int count = 0;
    int pos = 1;
    if(C==A){
        C = 0 ;
    }
    while (true) {
        pos = (pos+ B) % A; 
        count++;
        //cout << pos << "\n" ;
        if ( pos == 1) {
            break;
        }else if (pos == C){
          count +=1;
          break;
        }
    }

    cout << count;
    return 0;
}
