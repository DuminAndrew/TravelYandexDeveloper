#include <unordered_map>
#include <sstream>
#include <vector>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;
        std::istringstream stream(s);
        std::vector<std::string> words;
        std::string word;

        while (stream >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            const std::string& w = words[i];

            if (charToWord.count(c) && charToWord[c] != w) {
                return false;
            }
            if (wordToChar.count(w) && wordToChar[w] != c) {
                return false;
            }

            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};
