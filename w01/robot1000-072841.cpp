#include <iostream>
using namespace std;

int main() {
    int count;
    int x = 0;
    int y = 0;
    char a;
    while (cin >> a){
        if(a == 'E'){
            x+=1;
        }else if(a == 'W'){
            x+=-1;
        }else if(a == 'N'){
            y += 1;
            
        }else if(a == 'S'){
            y+=-1;
            
        }else if( a == 'Z'){
            x= 0;
            y= 0;
            
        
    }
        
    }

    cout << x<< " " <<y;
}
