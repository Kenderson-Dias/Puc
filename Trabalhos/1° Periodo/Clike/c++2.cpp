#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    int a, b;
    std::cin >> a >> b;

    std::string s = "";
    for (int i = a; i <= b; i++) {
        s += std::to_string(i);
    }

    std::cout << s;

    
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    std::cout << reversed_s << std::endl;

    return 0;
}