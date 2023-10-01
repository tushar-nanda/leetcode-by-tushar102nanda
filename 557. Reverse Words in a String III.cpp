class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        int i = 0;
        int n = s.length();
        while (j < n) {
            if (s[j] == ' ') {
                int len = j - i;
                int b = len - 1; 
                for (int a = i; a < i + len / 2; a++) {
                    swap(s[a], s[i + b]);
                    b--;
                }

                i = j + 1;
            }
            j++;
        }

        int len = n - i;
        int b = len - 1;
        for (int a = i; a < i + len / 2; a++) {
            swap(s[a], s[i + b]);
            b--;
        }

        return s;
    }
};
