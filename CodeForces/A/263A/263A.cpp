#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int array[5][5];
    int x;
    int y;
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 5;j++){
            cin >> array[i][j];
            if (array[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int sum = abs(x - 2) + abs(y - 2);
    cout << sum;
    return 0;
}
