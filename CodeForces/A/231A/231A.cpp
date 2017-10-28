#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int counter;
  int result = 0;
  for (int i = 1; i <= n*3;i++){
    int s;
    cin >> s;
    if (s == 1){
      counter++;
    }
    if (counter >= 2 && i % 3 == 0){
      counter = 0;
      result++;
    }
    else if (i % 3 == 0){
      counter = 0;
      continue;
    }
  }
  cout << result;
}
