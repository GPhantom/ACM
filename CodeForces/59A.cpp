#include <iostream>
#include <algorithm>
using namespace std;

int upper = 0, lower = 0;

char applyRule(char c){
    if (upper > lower){
        return toupper(c);
    }
    else{
        return tolower(c);
    }
}

int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length();i++){
        if (isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    transform(s.begin(), s.end(), s.begin(), applyRule);
    cout << s;
    return 0;
}
