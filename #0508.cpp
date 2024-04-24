#include <iostream>
#include <string>
#include <vector>

// Function to generate a line with spaces and asterisks for the diamond
std::string generateLine(int spaces, int asterisks) {
    return std::string(spaces, ' ') + std::string(asterisks, '*');
}

// Function to generate the diamond recursively
void generateDiamond(std::vector<std::string>& result, int n, int level = 0) {
    if (level == n) {
        return;
    }

    // Calculate the number of spaces and asterisks for this level
    int numSpaces = n - level - 1;
    int numAsterisks = 2 * level + 1;

    // Construct the line for this level
    std::string line = generateLine(numSpaces, numAsterisks);
    result.push_back(line);

    // Recursively generate next level
    generateDiamond(result, n, level + 1);

    // If not the last level, generate the line for this level again (excluding the last level)
    if (level != n - 1) {
        result.push_back(line);
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the diamond: ";
    std::cin >> n;

    std::vector<std::string> diamond;
    generateDiamond(diamond, n);

    // Print the diamond
    for (const auto& line : diamond) {
        std::cout << line << std::endl;
    }

    return 0;
}
