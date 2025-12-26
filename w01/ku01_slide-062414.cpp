#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
   
    cin >> N;

    vector<int> array(N);
    int count =0;
    for (int i = 0; i < N; i++) {
        int deg;
        cin >> deg;
        array[i] = deg;
        for (int j = 0;j<i;j++){
            if(array[j]<deg){
                
                count+=1;
            }
            
        }
    }
    cout << count;
    return 0;
}
