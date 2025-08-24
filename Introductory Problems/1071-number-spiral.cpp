#include <iostream>

void solve() {
    long long x, y;
    std::cin >> x >> y;
    if (y > x) {
        long long diag = (y * y) - (y - 1); 
        if (y % 2 == 0) {
            std::cout << diag - std::abs(x - y)<< std::endl;
        }
        else {
            std::cout << diag + std::abs(x - y) << std::endl;
        }
    }
    else {
        long long diag = (x * x) - (x - 1); 
        if (x % 2 == 0) {
            std::cout << diag + std::abs(x - y)<< std::endl;
        }
        else {
            std::cout << diag - std::abs(x - y)<< std::endl;
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}