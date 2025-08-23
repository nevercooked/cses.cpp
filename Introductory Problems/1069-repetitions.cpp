#include <iostream>

void solve() {
    std::string sequence;
    std::cin >> sequence;
    int longestRepetition = 1;
    int currentRepetition = 1;
    for (int i = 1; i < sequence.size(); ++i) {
        (sequence[i] == sequence[i - 1]) ? currentRepetition += 1 : currentRepetition = 1;
        longestRepetition = std::max(longestRepetition, currentRepetition);
    }
    std::cout << longestRepetition << std::endl;
}

int main() {
    solve();
    return 0;
}