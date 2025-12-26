#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int T;
    cin >> N >> T;
    int Ncopy = N;
    vector<int> arraydecode(N);
    if(T == 1){
        for(int i = 0 ; i<N;i++){
        int a;
        cin >> a;
        if(a < Ncopy){
            arraydecode[i] = 0;
            Ncopy= a;
        }else if(a > Ncopy){
            arraydecode[i] = 1;
            Ncopy = a;        
            
        }
        
    }
        
    }
    else if(T == 2){
         vector<int> array_y(N);
        for(int i = 0 ; i<N;i++){
        int a;
        cin >> a;
        if(i ==0){
            array_y[i] = a;
            if (a > N){
                arraydecode[i]=1;
            }else{
                arraydecode[i]=0;
            }
            
        }else{
        
        if(a == (array_y[i-1]*2)+array_y[i-1]+1){
            arraydecode[i] = 1;
            array_y[i]=array_y[i-1]+1;
        }else{
            arraydecode[i] = 0;
            array_y[i]=array_y[i-1]-1 ;      
            
        }
        
    }
        
        
    } }
    for(int i = 0 ; i< N; i++){
        cout << arraydecode[i]<<"\n";
    }
}
