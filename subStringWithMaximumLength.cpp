#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter characters to test: ";
    string characters;
    cin >> characters;

    string maxSubstring = "";
    string currentSubstring = "";

    for (int i = 0; i < characters.length(); i++) {
        if (i == 0 || characters[i] > characters[i - 1]) {
            // Extend the current substring
            currentSubstring += characters[i];
        } else {
            // Start a new substring
            currentSubstring = characters[i];
        }

        // Update maxSubstring if needed
        if (currentSubstring.length() > maxSubstring.length()) {
            maxSubstring = currentSubstring;
        }
    }

    cout << "The max substring is: " << maxSubstring << endl;

    return 0;
}
