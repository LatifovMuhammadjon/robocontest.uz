#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

bool customCompare(const std::string& a, const std::string& b) {
    int countA = 0, countB = 0;
    for (char c : a) {
        if (c == '(')
            countA++;
    }
    for (char c : b) {
        if (c == '(')
            countB++;
    }
    if (countA != countB)
        return countA < countB;
    return a < b;
}

void generateParentheses(std::set<std::string>& result, int n, std::string current = "", int open = 0, int close = 0) {
    if (current.length() == 2 * n) {
        result.insert(current);
        return;
    }
    if (open < n)
        generateParentheses(result, n, current + "(", open + 1, close);
    if (close < open)
        generateParentheses(result, n, current + ")", open, close + 1);
}

int main() {
    int n;
    std::cin >> n;
    std::set<std::string> parentheses;
    generateParentheses(parentheses, n);
    std::vector<std::string> sortedParentheses(parentheses.begin(), parentheses.end());
    std::sort(sortedParentheses.rbegin(), sortedParentheses.rend(), customCompare);
    for (const auto &c : sortedParentheses) {
        std::cout << c << std::endl;
    }
    return 0;
}
