#include <iostream>

void solve() {
    long long n;
    std::cin >> n;
    long long sum = (n * (n + 1)) / 2;
    for (int i = 1; i < n; ++i) {
        int v;
        std::cin >> v;
        sum -= v;
    }
    std::cout << sum << std::endl;
}

int main() {
    solve();
    return 0;
}