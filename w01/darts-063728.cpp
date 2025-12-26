    #include <iostream>

    using namespace std;
    
    int main() {
      int darts;
      cin >> darts;
      int score = 0;
      for (int i = 0; i<darts; i++){
        int a,b;
        cin>>a>>b;
        a = abs(a);
        b = abs(b);
        int dis = a*a + b*b; 
        if(dis<= 4  && a<= 2 &&b<=2){
          score+=5;
          
        }else if(dis<=16 && a<= 4 &&b<=4 ){
          score+=4;
          
        }else if(dis<= 36  && a<= 6 &&b<=6){
          score+=3;
          
        }else if(dis<= 64 && a<= 8 &&b<=8){
          score+=2;
          
        }else if(dis<= 100 && a<= 10 &&b<=10){
          score+=1;
          
        }
      //cout << score << "\n";  
      }
      cout << score;
      return 0;
    }