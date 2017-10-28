#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  string array[n];
  for (int i = 0;i < n;i++){
    cin >> array[i];
  }
  for (int i = 0;i < n;i++){
    if (array[i].length() > 10){
      int l = array[i].length();
      cout << array[i][0] << l - 2 << array[i][l-1] << endl;
    }
    else{
      cout << array[i] << endl;
    }
  }

}
