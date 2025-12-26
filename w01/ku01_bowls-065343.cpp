    #include <iostream>

    using namespace std;
    
    int main() {
      int plates;
      cin >> plates;
      int size[301]={0} ;
      int max=0;
      for (int i = 0; i<plates; i++){
        int a;
        cin>>a;
        size[a]+=1;
       if (size[a]>max){
           max = size[a];
       }
      }
      cout << max;
   
      return 0;
    }