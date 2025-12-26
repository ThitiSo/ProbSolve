#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    int findfloor = 0;
    int door = 0;
    while((findfloor+1)*(findfloor+1) < num){
        findfloor+=1;
    }
    //cout << findfloor << "\n";
    if(findfloor == 0 ){
        cout << findfloor;
        return 0 ;
    }else{
        int start = (findfloor*findfloor)+1;
        while(start <= (findfloor+1)*(findfloor+1)){
            
            if (start == num){
                cout << findfloor *2;
                return 0; 
            }
            start+= 2;
        }
        cout << (findfloor-1)*2 +1;
        return 0;
}
}
