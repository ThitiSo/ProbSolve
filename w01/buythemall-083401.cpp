#include <iostream>
using namespace std;

int main() {
    int moneyall[3]={0};
    cin >> moneyall[0] >> moneyall[1] >> moneyall[2];
    int N ;
    cin >> N;
    int moneyuse[3] ={0};
    int min = 1000000000;

    for (int i = 1; i <= N; i++) {
        int ty;
        cin >> ty;
        moneyuse[ty-1]+=moneyall[ty-1];
    }
    for(int i =0; i<3;i++){
        if(moneyuse[i]<min){
            min= moneyuse[i];
        }
        
    }
    cout << min;
}
