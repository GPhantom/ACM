#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  string end  = "it";
  string hate = "I hate ";
  string love = "I love ";
  string that = "that ";
  string hulk = "";
  for (int i = 1; i <= n;i++){
    if (i % 2 != 0){ // odd -> hate
      hulk = hulk + hate;
    }
    if (i % 2 == 0){ // even -> love
      hulk = hulk + love;
    }
    if(i == n){
      hulk = hulk + end;
      break;
    }
    else{
      hulk = hulk + that;
      continue;
    }

  }
  cout << hulk;
}
