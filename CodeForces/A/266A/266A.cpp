#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int answer = 0;
  int n;
  cin >> n;
  char array[n];
  for (int i = 0; i < n;i++){
    cin >> array[i];
  }
  char *front = &array[0];
  char *end   = &array[n-1];
  while (front != end){
    if (*front == *(front + 1)){
      answer++;
    }
    front++;
  }
  cout << answer;

}
