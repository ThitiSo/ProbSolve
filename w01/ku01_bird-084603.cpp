#include <iostream>
using namespace std;
#include <vector>
int main() {
    int N;
    cin >> N;
    int count=0;
    vector<int> alltree(N+2);
    alltree[0]=0;
    alltree[N+1]=0;
    for(int i =0;i< N ; i++){
        cin >> alltree[i+1];
    }
    for(int i =0;i< N ; i++){
        if(alltree[i+1]>alltree[i] &&alltree[i+1]> alltree[i+2]){
            count +=1;
        }
    }
    cout << count;
}
