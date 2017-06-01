#include <iostream>
using namespace std;

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

void decrypt(string code, char shift){
  int value;
  switch(shift){
    case 'L':
      value = 1;
      break;
    case 'R':
      value = -1;
  }
  for (int i = 0; i < code.length();i++){
    string::size_type index = keyboard.find(code[i]); // get index of code[i]
    cout << keyboard[index + value];
  }
}
int main(){
  string code;
  char shift;
  cin >> shift >> code;
  decrypt(code, shift);
  return 0;
}
