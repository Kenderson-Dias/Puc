#include <iostream>
using namespace std;

int main(){
    
    int n1 = 1;
    int n2 = 5;

    for (int i = n1; i <= n2; i++){
        cout << i;
    }

    for (int i = n2; i >= n1; i--){
        if (i >= 10){
            cout << i % 10 << i / 10;
        } else {
            cout << i;
        }
    }
}