#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int array[n];
  string answer = "YES";
  for (int i = 0; i < n;i++){
    cin >> array[i];
  }
  int wallet[] = {0,0,0}; // {25, 50,100}
  for (int i = 0; i < n;i++){
    if (array[i] == 25){ // Case 25
      wallet[0]++;
      continue;
    }
    else if (array[i] == 50){ // Case 50
      if (wallet[0] > 0){
        wallet[0]--;
        wallet[1]++;
        continue;
      }
      else{
        answer = "NO";
        break;
      }
    }
    else if (array[i] == 100){ // Case 100
      if (wallet[0] >= 1 && wallet[1] >= 1){
        wallet[0]--;
        wallet[1]--;
        wallet[2]++;
        continue;
      }
      else if (wallet[0] >= 3){
        wallet[0] = wallet[0] - 3;
        wallet[2]++;
        continue;
      }

      else{
        answer = "NO";
        break;
      }
    }
  }
  cout << answer << endl;
  //cout << wallet[0] << endl;
  //cout << wallet[1] << endl;
  //cout << wallet[2] << endl;
}
