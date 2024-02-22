#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int beautifulStringsCount(const string& S) {
    unordered_map<string, int> beautifulMap; // To store beautiful strings and their counts
    int n = S.length();
    int count = 0;

    // Iterate through each pair of characters in S
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            string beautifulString = S.substr(0, i) + S.substr(i + 1, j - i - 1) + S.substr(j + 1); // Remove the characters at indices i and j
            beautifulMap[beautifulString]++; // Increment the count for the modified string
        }
    }

    // Count the number of different beautiful strings
    for (const auto& pair : beautifulMap) {
        if (pair.second == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    string S;
    cout << "Enter the string S: ";
    cin >> S;

    cout << "Number of different beautiful strings with respect to S: " << beautifulStringsCount(S) << endl;

    return 0;
}
