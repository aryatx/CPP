#include <iostream>
#include <string>
#include <vector>
#include <cctype> // For std::tolower

// It's good practice for competitive programming to speed up I/O
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    // Convert string to lowercase
    for (char &c : s) {
        // Using static_cast<unsigned char> for c before std::tolower
        // is a good practice to avoid issues if char is signed and c is negative.
        c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    }

    std::vector<char> expected_chars_pattern = {'m', 'e', 'o', 'w'};
    int current_string_idx = 0; // Pointer for the input string s

    for (char char_to_find : expected_chars_pattern) {
        // Check if the string ended prematurely or if the current character
        // in s does not match the expected character for the start of the current block.
        if (current_string_idx == n || s[current_string_idx] != char_to_find) {
            std::cout << "NO\n";
            return; // Exit early if pattern is broken or string ends prematurely
        }
        
        // Cosume all occurrences of the current expected character.n
        // Since the check above passed (s[current_string_idx] == char_to_find),
        // this loop will execute at least once. This ensures that the block
        // for char_to_find is non-empty, fulfilling the "one or more" requirement.
        while (current_string_idx < n && s[current_string_idx] == char_to_find) {
            current_string_idx++;
        }
    }

    // After successfully processing all four character groups ('m', 'e', 'o', 'w'):
    // Check if the entire string has been consumed.
    if (current_string_idx == n) {
        std::cout << "YES\n";
    } else {
        // If current_string_idx < n, it means there are trailing characters
        // after the "meow" pattern (e.g., "meowx").
        std::cout << "NO\n";
    }
}

int main() {
    fast_io(); // Apply fast I/O settings

    int t;
    std::cin >> t; // Read the number of test cases
    while (t--) {
        solve();
    }
    return 0;
}