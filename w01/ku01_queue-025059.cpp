#include <iostream>
#include <vector>
using namespace std;

int main() {
    int res_cos, chair_cos;
    cin >> res_cos >> chair_cos;
    vector<int> res_array(res_cos);
    vector<int> chair_arr(chair_cos);
    for(int  i = 0; i<res_cos; i++){
        cin >> res_array[i];
    }
    for(int i = 0; i< chair_cos; i++){
        int max= 0;
        int compare;
        cin >> compare;
        for(int j= 0; j< compare - 1;j++){
            if(max < res_array[j]){
                max = res_array[j];
            }
        }
        if (res_array[compare - 1] <= max){
            chair_arr[i] = max - res_array[compare - 1] +1; 
        }else{
            chair_arr[i] =0;
        }
    }
    for(int i =0; i< chair_cos; i++){
        cout << chair_arr[i] << "\n";
        
    }
    return 0;
}
