#include <iostream>
using namespace std;

double calculaS(int n){
    if (n < 2.0) {
        return 0;
    } else {
        cout << n << endl;
        return 1.0/n + calculaS(n-1);
    } 
}

int main() {
    int num;
    double result;
    cin >> num;
    if (num > 0) {
        result = calculaS(num);
    }
    cout << result << endl;
    return 0;
}