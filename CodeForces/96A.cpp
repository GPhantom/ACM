#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int zeros = 0;
  int ones  = 0;
  string answer = "NO";
  for (int i = 0;i < s.length();i++){
    if (s[i] == '1'){
      ones++;
      zeros = 0;
    }
    else if (s[i] == '0'){
      zeros++;
      ones = 0;
    }
    if (zeros >= 7 || ones >= 7){
      answer = "YES";
      break;
    }
  }
  cout << answer;

}
