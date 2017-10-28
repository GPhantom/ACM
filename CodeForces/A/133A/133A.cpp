#include <iostream>
using namespace std;

bool isInstruction(char c){
  return c == 'H' || c == 'Q' || c == '9';
}
int main(){
  string s;
  cin >> s;
  string answer = "NO";
  for (int i = 0; i < s.length();i++){
    if (isInstruction(s[i])){
      answer = "YES";
      break;
    }
  }
  cout << answer;
}
