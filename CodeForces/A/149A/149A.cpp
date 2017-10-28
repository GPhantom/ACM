#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int k;
  int sum = 0;
  int counter = 0;
  cin >> k;
  int array[12];
  for (int i = 0; i < 12;i++){
    cin >> array[i];
  }
  std::sort(array, array + 12, std::greater<int>());
  int *pointer = &array[0];
  int *end     = &array[11];
  while (!(pointer > end)){
    if (k == 0){
      break;
    }
    else{
      sum = sum + *pointer;
      counter++;
      if (sum >= k){
        break;
      }
      else{
        pointer++;

      }
    }
    if (pointer > end && sum < k){
      counter = -1;
    }
  }
  cout << counter;
}
