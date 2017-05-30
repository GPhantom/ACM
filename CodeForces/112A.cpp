#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string a;
  string b;
  cin >> a;
  cin >> b;
  int counter = 0;
  std::transform(a.begin(), a.end(), a.begin(), ::tolower);
  std::transform(b.begin(), b.end(), b.begin(), ::tolower);
  for (int i = 0; i < a.length();i++){
    if (a[i] == b[i]){
      continue;
    }
    else if (a[i] > b[i]){
      counter = 1;
      break;
    }
    else{
      counter = -1;
      break;
    }
  }
  cout << counter;
}
