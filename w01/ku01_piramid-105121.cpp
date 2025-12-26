#include <iostream>
#include <vector>
using namespace std;

int main() {
    int height,pickout;
    cin >> height >> pickout;
    int i = 1;
    while (true){
        if (pickout <= 0){
            break;
        }
        pickout-=i*i;
        i+=1;
        if (pickout < 0){
            break;
        }
        height -=1;
    }
    cout << height;
    return 0;
}
