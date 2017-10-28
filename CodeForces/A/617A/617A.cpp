#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
  int x;
  cin >> x;
  int array[] = {5,4,3,2,1};
  int counter = 0;
  int *pointer = &array[0];
  while (x != 0){
    if (x >= *pointer){
      x = x - *pointer;
      counter++;
    }
    else{
      pointer = pointer + 1;
    }

  }
  cout << counter;

}
