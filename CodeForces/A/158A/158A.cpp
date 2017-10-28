#include <iostream>
using namespace std;

int main(){
  int n;
  int k;
  cin >> n;
  cin >> k;
  int array[n];
  int counter = 0;
  for (int i = 0; i < n;i++){
    cin >> array[i];
  }
  int k_score = array[k-1];
  for (int i = 0; i < n;i++){
    if (array[i] >= k_score){
      if (k_score == 0 && array[i] == 0){
        continue;
      }
      counter++;
    }
  }
  cout << counter;
}
