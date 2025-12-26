    #include <iostream>

    using namespace std;
    
    int main() {
      int gifts;
      cin >> gifts;
      int value = 0;
      for (int i = 0; i<gifts; i++){
        int a;
        cin>>a;
       if (a> 0){
           value+=a;
       }
      }
      cout << value;
      return 0;
    }