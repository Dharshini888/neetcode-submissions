class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
    string word;
    stringstream ss(s);

    // Split string s into words
    while (ss >> word) {
        words.push_back(word);
    }

    // If lengths differ, cannot match
    if (pattern.length() != words.size()) {
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.length(); i++) {
        char c = pattern[i];
        string w = words[i];

        // If mapping exists, check consistency
        if (charToWord.count(c)) {
            if (charToWord[c] != w) {
                return false;
            }
        } else {
            charToWord[c] = w;
        }

        // Check reverse mapping for bijection
        if (wordToChar.count(w)) {
            if (wordToChar[w] != c) {
                return false;
            }
        } else {
            wordToChar[w] = c;
        }
    }

    return true;
    }
};