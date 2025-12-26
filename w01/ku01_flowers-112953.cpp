#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, num;
    cin >> size >> num;
    
    int ans = 1;
    int starter = size * ((size/2)+1);
    int curr = starter;
    if (starter >= num){
        cout << 1;
        return 0;
    }
    while (curr < num){
        //cout<< curr<< "\n";
        curr += starter + ans*size* size;
        ans++;
    }
    cout << ans;
    return 0;
}
