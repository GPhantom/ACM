#include <iostream>
using namespace std;

int main(){
  int n;
  int sum = 0;
  int i;
  int k = 0;
  cin >> n;
  if (n == 1){
    cout << 1;
    return 0;
  }
  for (i = 1;i <= n;i++){
    k = k + (i);
    sum = sum + k;
    if (sum > n){
      break;
    }
  }
  cout << i-1;
}
