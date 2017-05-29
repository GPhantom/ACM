#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
  int s;
  int n;
  string answer = "YES";
  cin >> s;
  cin >> n;
  int arrayx[n];
  int arrayy[n];
  int cx = -1;
  int cy = -1;
  for (int i = 0; i < n*2;i++){//odd->yi even->Xi
    if (i % 2 == 0){
      cin >> arrayx[++cx];
      
    }
    else{
      cin >> arrayy[++cy];

    }

  }
  pair<int, int> pairs[n];
  for (int j = 0; j < n;j++){
    pairs[j] = make_pair( arrayx[j], arrayy[j] );
  }
  sort( pairs, pairs+n );
  for (int k = 0; k < n; ++k)
  {
    arrayx[k] = pairs[k].first;
    arrayy[k] = pairs[k].second;
  }


  int *pointerx = &arrayx[0];
  int *pointery = &arrayy[0];
  int *end      = &arrayx[n-1];
  while (!(pointerx > end)){
    if (s > *pointerx){
      s = s + *pointery;
      pointerx++;
      pointery++;
    }
    else{
      answer = "NO";
      break;
    }
  }
  cout << answer;
}
