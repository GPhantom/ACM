#include <iostream>
using namespace std;
int main(){
  int x = 0;
  int n;
  int counter = 0;
  int plus    = 0;
  int min     = 0;
  cin >> n;
  char array[n];
  char c;
  for (int i = 0; i < n*3;i++){
    cin >> c;
    if (c == '+'){
      plus++;
    }
    else if (c == '-'){
      min++;
    }
    c = ' ';
  }
  int p = plus/2;
  int m = min/2;
  x = x + p - m;
  cout << x;
}
