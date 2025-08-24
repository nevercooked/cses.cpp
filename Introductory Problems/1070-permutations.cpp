#include <iostream>
#include <sstream>

void solve() {
    int n;
    std::cin >> n;
    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION" << std::endl;
        return;
    }
    std::stringstream ss;
    for (int i = 2; i <= n; i += 2) {
        ss << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        ss << i << " ";
    }
    std::cout << ss.str() << std::endl;
}

int main() {
    solve();
    return 0;
}