#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> no(num);
    vector<char> oper(num-1);
    for (int i = 0; i< num-1 ; i++ ){
        cin >> no[i] >> oper[i];
        
    }
    cin >> no[num-1];
    
    int ans = no[0];
    
    for(int i = 1; i< num;i++){
        if (oper[i-1]=='+'){
            ans+=no[i];
        }else if(oper[i-1]=='-'){
            ans-=no[i];
        }
        
    }
    
    cout << ans;
    return 0;
}
