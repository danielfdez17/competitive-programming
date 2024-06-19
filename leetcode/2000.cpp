class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res = "";
        int i = 0;
        while (i < word.size() && word[i] != ch) {
            ++i;
        }
        if (i != word.size()) {
            int aux = i;
            while (i >= 0) {
                res += word[i];
                --i;
            }
            for (int j = aux + 1; j < word.size(); ++j) {
                res += word[j];
            }
        }
        else res = word;
        return res;
    }
};