#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
  string x;
  cin >> x;
  int z = 0;
  //cout << x[2]
  std::sort(x.begin(),x.end());
  //cout << x;
  char *pointer = &x[0];
  char *end     = &x[x.length()-1];
  while (!(pointer > end)){
    if (*pointer == *(pointer + 1)){
      z++;
    }
    pointer++;

  }
  //cout << z;
  if ((x.length() - z) % 2 == 0){
    cout << "CHAT WITH HER!";
  }
  else{
    cout << "IGNORE HIM!";
  }
}
