#include <iostream>
#include <cstdlib>

float calcula (int n){
    if (n == 0)
        return 0.0;
    return 1.0/n + calcula(n-1);
}


int main (){
    using namespace std;
    float N = 0, S = 0;
    cout << "Insira o valor de n\n";
    cin >> N;
    S = calcula(N);
    cout << S;
}