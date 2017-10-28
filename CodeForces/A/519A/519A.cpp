#include <iostream>
using namespace std;

int w = 0, b = 0;

void evaluate(char c, bool isWhite){
  int value = 0;
  switch (c) {
    case 'q':
    case 'Q': value = 9; break;
    case 'r':
    case 'R': value = 5; break;
    case 'b':
    case 'B':
    case 'n':
    case 'N': value = 3; break;
    case 'p':
    case 'P': value = 1; break;
    default : value = 0; break;
  }
  if (isWhite){
    w += value;
  }
  else{
    b += value;
  }
}

int main(){

  for (int i = 0; i < 64;i++){
    char c;
    cin >> c;
    evaluate(c, isupper(c));
  }
  if (w > b){
    cout << "White";
  }
  else if (b > w){
    cout << "Black";
  }
  else{
    cout << "Draw";
  }
  return 0;
}
