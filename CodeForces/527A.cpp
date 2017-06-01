#include <iostream>
using namespace std;

int main(){
  long long a, b, c = 1, counter = 0;
  cin >> a >> b;
  while (c != 0){
    counter = counter + (a/b);
    c = a % b;
    a = b;
    b = c;
  }
  cout << counter;
  return 0;
}
