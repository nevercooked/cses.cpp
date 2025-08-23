#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    long long xmax;
    std::cin >> xmax;
    long long steps = 0;
    for (int i = 1; i < n; ++i) {
        long long x;
        std::cin >> x;
        steps += std::max(0LL, xmax - x);
        xmax   = std::max(xmax, x);
    }
    std::cout << steps << std::endl;

}

int main() {
    solve();
    return 0;
}