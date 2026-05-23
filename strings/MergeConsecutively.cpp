class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

        int i = 0, j = 0;
        string s = "";

        while (i < m && j < n) {
            s += word1[i++];
            s += word2[j++];
        }

        while (i < m) {
            s += word1[i++];
        }

        while (j < n) {
            s += word2[j++];
        }

        return s;
    }
};