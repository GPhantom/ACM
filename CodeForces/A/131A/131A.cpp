#include <iostream>
#include <cstdlib>
using namespace std;

string applyRule(string s){
  for (int i = 0; i < s.length();i++){
    if (isupper(s[i])){
      s[i] = tolower(s[i]);
    }
    else{
      s[i] = toupper(s[i]);
    }
  }
  return s;
}

int main(){
  string s;
  cin >> s;
  if (islower(s[0])){
    for (int i = 1; i < s.length();i++){
      if (isupper(s[i])){
        continue;
      }
      else{
        cout << s;
        exit(0);
      }
    }
    cout << applyRule(s);
  }
  else{
    for (int i = 0; i < s.length();i++){
      if (isupper(s[i])){
        continue;
      }
      else{
        cout << s;
        exit(0);
      }
    }
    cout << applyRule(s);
  }
}
